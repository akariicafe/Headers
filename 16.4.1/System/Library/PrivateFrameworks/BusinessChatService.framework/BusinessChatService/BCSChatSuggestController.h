@class NSString;
@protocol BCSIdentityServiceProtocol, BCSUserDefaultsProviding, BCSLocaleHelperProtocol;

@interface BCSChatSuggestController : NSObject <BCSChatSuggestControllerProtocol> {
    id<BCSUserDefaultsProviding> _userDefaults;
    id<BCSIdentityServiceProtocol> _identityService;
    id<BCSLocaleHelperProtocol> _localeHelper;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)chatSuggestVisibilityForBusinessItem:(id)a0;

@end
