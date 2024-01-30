@class NSString, PBUIWallpaperEffectViewBase;

@interface PBUIWallpaperStyleInfo : NSObject <BSDescriptionProviding> {
    struct { BOOL valid; struct { long long startStyle; long long endStyle; double transitionFraction; } styleTransitionState; } _priorityInfo[4];
}

@property (retain, nonatomic) PBUIWallpaperEffectViewBase *wallpaperEffectView;
@property (nonatomic) struct { long long startStyle; long long endStyle; double transitionFraction; } styleTransitionState;
@property (readonly, nonatomic) long long highestValidPriority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (void)enumerateValidPrioritiesUsingBlock:(id /* block */)a0;
- (struct { BOOL x0; struct { long long x0; long long x1; double x2; } x1; })priorityInfoForPriority:(long long)a0;
- (void)removePriorityInfoForPriority:(long long)a0;
- (void)setPriorityInfo:(struct { BOOL x0; struct { long long x0; long long x1; double x2; } x1; })a0 forPriority:(long long)a1;

@end
