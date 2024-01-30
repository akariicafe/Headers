@class NSString, ACAccountStore, AIDAAccountManager, FAFamilyEligibilityRequester;

@interface NPFamilyEligibilityProvider : NSObject <AIDAAccountManagerDelegate, NPFamilyEligibilityProviderType>

@property (readonly, nonatomic) ACAccountStore *store;
@property (readonly, nonatomic) AIDAAccountManager *accountManager;
@property (readonly, nonatomic) FAFamilyEligibilityRequester *eligibilityRequester;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
