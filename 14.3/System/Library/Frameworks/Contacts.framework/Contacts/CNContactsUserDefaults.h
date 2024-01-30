@class NSString;

@interface CNContactsUserDefaults : NSObject

@property (nonatomic) long long displayNameOrder;
@property (nonatomic) long long shortNameFormat;
@property (nonatomic, getter=isShortNameFormatEnabled) BOOL shortNameFormatEnabled;
@property (nonatomic) BOOL shortNameFormatPrefersNicknames;
@property (readonly, nonatomic) long long sortOrder;
@property (readonly, copy, nonatomic) NSString *countryCode;

+ (void)flushSharedInstance;
+ (id)sharedDefaults;

- (id)init;
- (id)filteredGroupAndContainerIDs;
- (void)setFilteredGroupAndContainerIDs:(id)a0;
- (long long)newContactDisplayNameOrder;
- (id)changeNotificationName;

@end
