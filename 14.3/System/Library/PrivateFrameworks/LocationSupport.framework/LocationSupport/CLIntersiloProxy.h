@class CLSilo;
@protocol CLIntersiloProxyDelegateProtocol;

@interface CLIntersiloProxy : NSProxy

@property (readonly, weak, nonatomic) id<CLIntersiloProxyDelegateProtocol> delegate;
@property (readonly, weak, nonatomic) CLSilo *delegateSilo;

+ (Class)initiatorRepresentingClass;
+ (Class)recipientRepresentingClass;
+ (id)proxyForRecipientObject:(id)a0 inSilo:(id)a1 recipientName:(id)a2;

- (BOOL)offsiloHandleInvocation:(id)a0 selectorInfo:(id)a1 peer:(id)a2;
- (void)forwardInvocation:(id)a0;
- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)initWithDelegateObject:(id)a0 delegateSilo:(id)a1;
- (void).cxx_destruct;
- (void)registerDelegate:(id)a0 inSilo:(id)a1;
- (id)description;
- (void)setDelegateEntityName:(const char *)a0;
- (id)peer;

@end
