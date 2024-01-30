@class NSString, SSVPushNotificationParameters;

@interface SSVPushNotificationRequest : SSRequest <SSXPCCoding>

@property (copy, nonatomic) SSVPushNotificationParameters *pushNotificationParameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)start;
- (id)initWithPushNotificationParameters:(id)a0;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;
- (void).cxx_destruct;
- (void)startWithCompletionBlock:(id /* block */)a0;
- (void)startWithResponseBlock:(id /* block */)a0;

@end
