@protocol ISLivePhotoSettleBehaviorDelegate;

@interface ISLivePhotoSettleBehavior : ISBehavior

@property (weak, nonatomic) id<ISLivePhotoSettleBehaviorDelegate> delegate;

- (void)settle:(BOOL)a0;
- (long long)behaviorType;
- (void)_didFinish;

@end
