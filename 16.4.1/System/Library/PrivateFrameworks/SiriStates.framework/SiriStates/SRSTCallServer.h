@class _SRSTCallServer, SRSTCallState;

@interface SRSTCallServer : NSObject

@property (readonly) _SRSTCallServer *underlyingObject;
@property (readonly, nonatomic) SRSTCallState *currentState;

- (id)init;
- (void).cxx_destruct;

@end
