@class SVXSession;

@interface SVXSessionIdleAssertion : NSObject

@property (readonly, nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) SVXSession *session;

- (id)description;
- (void).cxx_destruct;
- (id)initWithTimestamp:(unsigned long long)a0 session:(id)a1;

@end
