@class CNGeminiManager;

@interface IMSenderIdentityManager : NSObject

@property (retain, nonatomic) CNGeminiManager *geminiManager;

+ (id)sharedInstance;
+ (BOOL)isTUSenderIdentity:(id)a0 equalToSubscriptionContext:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)bestSenderIdentityForHandleID:(id)a0 contact:(id)a1;
- (id)contactPreferredSenderIdentityForHandleID:(id)a0 contact:(id)a1;
- (id)bestSenderIdentityForHandleIDs:(id)a0;
- (id)bestSenderIdentityForGeminiHandle:(id)a0 contact:(id)a1;

@end
