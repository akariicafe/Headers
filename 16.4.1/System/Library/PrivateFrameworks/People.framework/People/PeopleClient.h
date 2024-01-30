@class NSError, NSString;

@interface PeopleClient : NSObject

- (id)init;
- (void)canSendFamilyAskToBuyIMessageWithCompletion:(void (^)(BOOL, NSError *))a0;
- (void)canSendFamilyIMessageWithCompletion:(void (^)(BOOL, NSError *))a0;
- (void)canSendFamilyScreenTimeRequestIMessageWithCompletion:(void (^)(BOOL, NSError *))a0;
- (void)sendFamilyAskToBuyIMessageWithRequestID:(NSString *)a0 completion:(void (^)(BOOL, NSError *))a1;

@end
