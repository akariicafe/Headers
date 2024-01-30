@class CLSilo;
@protocol CLIntersiloProxyDelegateProtocol;

@interface CLIntersiloProxy : NSProxy

@property (readonly, weak, nonatomic) id<CLIntersiloProxyDelegateProtocol> delegate;
@property (readonly, weak, nonatomic) CLSilo *delegateSilo;

+ (Class)initiatorRepresentingClass;
+ (id)proxyForRecipientObject:(id)a0 inSilo:(id)a1 recipientName:(id)a2;
+ (Class)recipientRepresentingClass;

- (BOOL)offsiloHandleInvocation:(id)a0 selectorInfo:(id)a1 peer:(id)a2;
- (void)setDelegateEntityName:(const char *)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)description;
- (void)registerDelegate:(id)a0 inSilo:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDelegateObject:(id)a0 delegateSilo:(id)a1;
- (id)peer;
- (void)forwardInvocation:(id)a0;

@end
