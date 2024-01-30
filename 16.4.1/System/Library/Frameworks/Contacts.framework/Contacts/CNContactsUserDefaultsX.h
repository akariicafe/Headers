@class CNFoundationUserDefaults;

@interface CNContactsUserDefaultsX : CNContactsUserDefaults

@property (retain) CNFoundationUserDefaults *foundationUserDefaults;

- (long long)displayNameOrder;
- (long long)sortOrder;
- (BOOL)isShortNameFormatEnabled;
- (BOOL)shortNameFormatPrefersNicknames;
- (void)setShortNameFormat:(long long)a0;
- (void)setDisplayNameOrder:(long long)a0;
- (id)filteredGroupAndContainerIDs;
- (id)countryCode;
- (id)init;
- (void)setFilteredGroupAndContainerIDs:(id)a0;
- (void)setShortNameFormatPrefersNicknames:(BOOL)a0;
- (void).cxx_destruct;
- (long long)newContactDisplayNameOrder;
- (long long)shortNameFormat;
- (void)setShortNameFormatEnabled:(BOOL)a0;
- (id)initWithFoundationUserDefaults:(id)a0;

@end
