@protocol AVScrubbingGesturePlatformAdapterDelegate;

@interface AVScrubbingGesturePlatformAdapter : NSObject

@property (weak, nonatomic) id<AVScrubbingGesturePlatformAdapterDelegate> delegate;
@property (nonatomic) BOOL gestureEnabled;
@property (readonly, nonatomic) float timelineVelocity;
@property (readonly, nonatomic) BOOL gestureActive;

- (void).cxx_destruct;
- (id)_abstractInit;

@end
