@protocol ISLivePhotoSettleBehaviorDelegate;

@interface ISLivePhotoSettleBehavior : ISBehavior

@property (weak, nonatomic) id<ISLivePhotoSettleBehaviorDelegate> delegate;

- (long long)behaviorType;
- (void)settle:(BOOL)a0;
- (void)_didFinish;

@end
