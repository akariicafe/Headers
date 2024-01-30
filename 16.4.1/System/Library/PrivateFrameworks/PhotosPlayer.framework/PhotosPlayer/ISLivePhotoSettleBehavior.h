@protocol ISLivePhotoSettleBehaviorDelegate;

@interface ISLivePhotoSettleBehavior : ISBehavior

@property (weak, nonatomic) id<ISLivePhotoSettleBehaviorDelegate> delegate;

- (void)_didFinish;
- (long long)behaviorType;
- (void)settle:(BOOL)a0;

@end
