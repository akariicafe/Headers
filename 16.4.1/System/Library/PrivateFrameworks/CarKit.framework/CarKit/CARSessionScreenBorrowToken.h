@class NSString, CARSession;

@interface CARSessionScreenBorrowToken : NSObject

@property (readonly, weak, nonatomic) CARSession *session;
@property (readonly, copy, nonatomic) NSString *client;
@property (readonly, copy, nonatomic) NSString *reason;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithSession:(id)a0 client:(id)a1 reason:(id)a2;
- (void)unborrowToken;

@end
