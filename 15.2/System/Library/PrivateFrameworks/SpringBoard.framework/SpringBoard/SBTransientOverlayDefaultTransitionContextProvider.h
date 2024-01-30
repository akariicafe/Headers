@class NSString, NSMutableArray;

@interface SBTransientOverlayDefaultTransitionContextProvider : NSObject <SBTransientOverlayTransitionContextProviding> {
    BOOL _didPerformAlongsideTransitions;
    BOOL _isCompleted;
    NSMutableArray *_transitionBlocks;
    NSMutableArray *_transitionCompletionBlocks;
    BOOL _transitionCompletedSuccessfully;
}

@property (nonatomic, getter=isAnimated) BOOL animated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
