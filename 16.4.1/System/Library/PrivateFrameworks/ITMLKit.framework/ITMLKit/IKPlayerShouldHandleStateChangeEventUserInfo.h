@interface IKPlayerShouldHandleStateChangeEventUserInfo : IKPlayerStateChangeEventUserInfo

@property (readonly, nonatomic) double requestedTime;
@property (readonly, nonatomic) BOOL shouldHandle;
@property (readonly, nonatomic) double proposedTime;

- (id)initWithState:(long long)a0;
- (void)processReturnJSValue:(id)a0 inContext:(id)a1;
- (id)initWithState:(long long)a0 oldState:(long long)a1;
- (id)initWithState:(long long)a0 oldState:(long long)a1 requestedTime:(double)a2;
- (id)initWithState:(long long)a0 requestedTime:(double)a1;

@end
