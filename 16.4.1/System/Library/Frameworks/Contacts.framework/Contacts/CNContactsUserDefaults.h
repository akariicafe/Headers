@class NSString;

@interface CNContactsUserDefaults : NSObject

@property (nonatomic) long long displayNameOrder;
@property (nonatomic) long long shortNameFormat;
@property (nonatomic, getter=isShortNameFormatEnabled) BOOL shortNameFormatEnabled;
@property (nonatomic) BOOL shortNameFormatPrefersNicknames;
@property (readonly, nonatomic) long long sortOrder;
@property (readonly, copy, nonatomic) NSString *countryCode;

+ (id)sharedDefaults;
+ (void)flushSharedInstance;

- (void)setLastIgnoredNewDuplicatesCount:(long long)a0;
- (id)filteredGroupAndContainerIDs;
- (id)changeNotificationName;
- (id)init;
- (long long)lastIgnoredNewDuplicatesCount;
- (void)setFilteredGroupAndContainerIDs:(id)a0;
- (long long)newContactDisplayNameOrder;

@end
