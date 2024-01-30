@class NSData;

@interface FARegisterPushTokenRequest : FAFamilyCircleRequest

@property (readonly, copy) NSData *pushToken;

- (void)startRequestWithCompletionHandler:(id /* block */)a0;
- (id)initWithPushToken:(id)a0;
- (void).cxx_destruct;

@end
