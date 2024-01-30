@class NSData;

@interface FARegisterPushTokenRequest : FAFamilyCircleRequest

@property (readonly, copy) NSData *pushToken;

- (void).cxx_destruct;
- (id)initWithPushToken:(id)a0;
- (void)startRequestWithCompletionHandler:(id /* block */)a0;

@end
