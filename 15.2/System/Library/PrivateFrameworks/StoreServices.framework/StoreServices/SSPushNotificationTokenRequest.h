@class NSString;

@interface SSPushNotificationTokenRequest : SSRequest <SSXPCCoding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;
- (void)startWithCompletion:(id /* block */)a0;

@end
