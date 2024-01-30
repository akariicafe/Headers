@class NSString, NSArray, WBSGlobalFrameIdentifier;

@interface SFAccountPickerConfiguration : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *prompt;
@property (copy, nonatomic) NSString *promptWhenPasskeysAreAvailable;
@property (copy, nonatomic) NSArray *serviceNameHintStrings;
@property (copy, nonatomic) NSArray *domainHintStrings;
@property (nonatomic) unsigned long long minimumNumberOfCredentialsToShowLikelyMatchesSection;
@property (nonatomic) BOOL forUserNamesOnly;
@property (nonatomic) BOOL shouldShowIcons;
@property (nonatomic) BOOL shouldAllowMultipleSelection;
@property (nonatomic) BOOL shouldShowPasskeysInAccountPicker;
@property (nonatomic) BOOL shouldShowAutoFillPasskeys;
@property (copy, nonatomic) WBSGlobalFrameIdentifier *currentWebFrameIdentifierForAutoFillPasskeys;
@property (nonatomic) struct { unsigned int val[8]; } connectedAppAuditToken;
@property (readonly, nonatomic) BOOL hasAuditToken;
@property (readonly, nonatomic) BOOL shouldAllowAddingNewPasswords;
@property (nonatomic) BOOL shouldEnableAddingNewPasswordsIfPossible;
@property (copy, nonatomic) NSString *addPasswordSuggestedDomain;

- (void).cxx_destruct;

@end
