@interface NEIKEv2RequestContext : NSObject

@property (nonatomic) int requestType;
@property (nonatomic) BOOL requestInitiator;

- (id)description;
- (void)sendCallbackSuccess:(BOOL)a0 session:(id)a1;
- (id)initWithRequestType:(int)a0;

@end
