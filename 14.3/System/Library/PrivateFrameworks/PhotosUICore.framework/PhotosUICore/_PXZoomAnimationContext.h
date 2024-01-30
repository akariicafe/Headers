@class PXRegionOfInterest, NSString, NSMutableArray, NSObject, PXNonuniformTransform;
@protocol OS_dispatch_group;

@interface _PXZoomAnimationContext : NSObject <PXZoomAnimationContext> {
    NSObject<OS_dispatch_group> *_animationGroup;
    NSMutableArray *_cleanupHandlers;
}

@property (copy, nonatomic, setter=_setAllAnimationsCompletionHandler:) id /* block */ _allAnimationsCompletionHandler;
@property (nonatomic) long long animationType;
@property (nonatomic) double animationDuration;
@property (nonatomic) double fromAlpha;
@property (retain, nonatomic) PXNonuniformTransform *fromTransform;
@property (retain, nonatomic) PXRegionOfInterest *fromRegionOfInterest;
@property (nonatomic) double toAlpha;
@property (retain, nonatomic) PXNonuniformTransform *toTransform;
@property (retain, nonatomic) PXRegionOfInterest *toRegionOfInterest;
@property (nonatomic, getter=isMatchingRegionsOfInterest) BOOL matchingRegionsOfInterest;
@property (nonatomic) BOOL keepsSourceRegionOfInterestContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)cleanup;
- (void)didEndAnimation:(long long)a0;
- (long long)willBeginAnimation;
- (void)registerCleanupHandler:(id /* block */)a0;
- (void)notifyWhenAllAnimationsCompleted:(id /* block */)a0;

@end
