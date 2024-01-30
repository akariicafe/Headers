@class CNContainer, CNContact;
@protocol CNUICoreParentContainerProvider, CNUICoreScreentimePasscodeCheck;

@interface CNUICoreEditAuthorizationCheck : NSObject

@property (readonly, nonatomic) CNContact *contact;
@property (readonly, nonatomic) CNContainer *parentContainer;
@property (readonly, nonatomic) BOOL ignoresParentalRestrictions;
@property (readonly, nonatomic) id<CNUICoreScreentimePasscodeCheck> screenTimePasscodeStatusCheck;
@property (readonly, nonatomic) id<CNUICoreParentContainerProvider> linkedParentContainerProvider;

+ (id)log;
+ (id)containerProviderWithContactStore:(id)a0;
+ (BOOL)isAuthorizationPasscodeEnabledOnDevice;

- (id)initWithContact:(id)a0 parentContainer:(id)a1 ignoresParentalRestrictions:(BOOL)a2 linkedParentContainerProvider:(id)a3;
- (void).cxx_destruct;
- (BOOL)shouldPromptForPasscodeAuthorization;
- (BOOL)shouldBypassRestrictionsGivenAuthorizationResult:(long long)a0;
- (id)initWithContact:(id)a0 parentContainer:(id)a1 ignoresParentalRestrictions:(BOOL)a2;
- (id)initWithContact:(id)a0 parentContainer:(id)a1 ignoresParentalRestrictions:(BOOL)a2 screenTimePasscodeStatusCheck:(id)a3 linkedParentContainerProvider:(id)a4;
- (BOOL)canPerformValidAuthorizationCheck;
- (BOOL)shouldRespectParentalRestrictions;
- (BOOL)editAltersRestrictedInformation;
- (BOOL)authorizationPasscodeEnabledOnDevice;

@end
