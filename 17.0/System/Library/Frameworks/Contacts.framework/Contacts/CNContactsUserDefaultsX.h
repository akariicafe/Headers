@class CNFoundationUserDefaults;

@interface CNContactsUserDefaultsX : CNContactsUserDefaults

@property (retain) CNFoundationUserDefaults *foundationUserDefaults;

- (long long)sortOrder;
- (id)init;
- (long long)shortNameFormat;
- (void)setShortNameFormatEnabled:(BOOL)a0;
- (id)countryCode;
- (id)filteredGroupAndContainerIDs;
- (BOOL)isShortNameFormatEnabled;
- (void)setShortNameFormat:(long long)a0;
- (BOOL)shortNameFormatPrefersNicknames;
- (void)setDisplayNameOrder:(long long)a0;
- (void)setFilteredGroupAndContainerIDs:(id)a0;
- (void).cxx_destruct;
- (id)initWithFoundationUserDefaults:(id)a0;
- (long long)displayNameOrder;
- (long long)newContactDisplayNameOrder;
- (void)setShortNameFormatPrefersNicknames:(BOOL)a0;

@end
