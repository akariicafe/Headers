@class CNFoundationUserDefaults;

@interface CNContactsUserDefaultsX : CNContactsUserDefaults

@property (retain) CNFoundationUserDefaults *foundationUserDefaults;

- (long long)displayNameOrder;
- (long long)sortOrder;
- (void)setShortNameFormat:(long long)a0;
- (id)init;
- (void).cxx_destruct;
- (id)filteredGroupAndContainerIDs;
- (BOOL)shortNameFormatPrefersNicknames;
- (id)countryCode;
- (void)setDisplayNameOrder:(long long)a0;
- (void)setFilteredGroupAndContainerIDs:(id)a0;
- (long long)shortNameFormat;
- (void)setShortNameFormatPrefersNicknames:(BOOL)a0;
- (long long)newContactDisplayNameOrder;
- (void)setShortNameFormatEnabled:(BOOL)a0;
- (id)initWithFoundationUserDefaults:(id)a0;
- (BOOL)isShortNameFormatEnabled;

@end
