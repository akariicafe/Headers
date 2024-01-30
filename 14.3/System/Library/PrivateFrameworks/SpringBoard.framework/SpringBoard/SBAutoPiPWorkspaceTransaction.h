@class NSString, SBWorkspaceEntity;

@interface SBAutoPiPWorkspaceTransaction : SBWorkspaceTransaction {
    int _pidToPiP;
    long long _inferredTransitionStyle;
    NSString *_reason;
}

@property (readonly, copy, nonatomic) SBWorkspaceEntity *entityToPiP;
@property (nonatomic) long long transitionStyle;

+ (BOOL)shouldAutoPiPEnteringBackgroundForRequest:(id)a0;
+ (long long)transitionStyleForProcessIdentifier:(int)a0 entityToPiP:(id)a1 withTransitionContext:(id)a2 request:(id)a3;
+ (BOOL)shouldAutoPiPEnteringBackgroundForRequest:(id)a0 entityFoundBlock:(id /* block */)a1;

- (id)initWithTransitionRequest:(id)a0;
- (void).cxx_destruct;
- (void)_didComplete;
- (BOOL)_canBeInterrupted;
- (id)_customizedDescriptionProperties;
- (void)_begin;
- (id)initWithTransitionRequest:(id)a0 includeActiveAppEntity:(BOOL)a1;

@end
