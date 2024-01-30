@class NSString, NSArray;

@interface _SFPasswordPickerTableConfiguration : NSObject

@property (copy, nonatomic) NSString *prompt;
@property (copy, nonatomic) NSArray *serviceNameHintStrings;
@property (copy, nonatomic) NSArray *domainHintStrings;
@property (nonatomic) unsigned long long minimumNumberOfCredentialsToShowLikelyMatchesSection;
@property (nonatomic) BOOL forUserNamesOnly;
@property (nonatomic) BOOL shouldShowIcons;

- (void).cxx_destruct;

@end
