@class CNFoundationUserDefaults;

@interface CNContactsUserDefaultsX : CNContactsUserDefaults

@property (retain) CNFoundationUserDefaults *foundationUserDefaults;

- (long long)sortOrder;
- (long long)displayNameOrder;
- (void)setDisplayNameOrder:(long long)a0;
- (id)filteredGroupAndContainerIDs;
- (void)setShortNameFormatPrefersNicknames:(BOOL)a0;
- (id)countryCode;
- (void)setFilteredGroupAndContainerIDs:(id)a0;
- (void)setShortNameFormat:(long long)a0;
- (long long)newContactDisplayNameOrder;
- (long long)shortNameFormat;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isShortNameFormatEnabled;
- (BOOL)shortNameFormatPrefersNicknames;
- (id)initWithFoundationUserDefaults:(id)a0;
- (void)setShortNameFormatEnabled:(BOOL)a0;

@end
