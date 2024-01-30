@class NSString, NSArray;

@interface SFPasswordPickerConfiguration : NSObject

@property (copy, nonatomic) NSString *prompt;
@property (copy, nonatomic) NSArray *serviceNameHintStrings;
@property (copy, nonatomic) NSArray *domainHintStrings;
@property (nonatomic) unsigned long long minimumNumberOfCredentialsToShowLikelyMatchesSection;
@property (nonatomic) BOOL forUserNamesOnly;
@property (nonatomic) BOOL shouldShowIcons;
@property (nonatomic) BOOL supportsAdd;
@property (copy, nonatomic) NSString *addPasswordSuggestedDomain;

- (void).cxx_destruct;

@end
