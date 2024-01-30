@class NSString, CARSession;

@interface CARSessionScreenBorrowToken : NSObject

@property (readonly, weak, nonatomic) CARSession *session;
@property (readonly, copy, nonatomic) NSString *client;
@property (readonly, copy, nonatomic) NSString *reason;

- (void).cxx_destruct;
- (void)dealloc;
- (void)unborrowToken;
- (id)initWithSession:(id)a0 client:(id)a1 reason:(id)a2;

@end
