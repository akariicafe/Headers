@interface CNiOSABContactsUserDefaultsABWrapper : NSObject

- (void)ABPersonSetShortNameFormat:(unsigned int)a0;
- (unsigned int)ABPersonGetEditNameFormat;
- (unsigned int)ABPersonGetCompositeNameFormatForRecord:(void *)a0;
- (void)setLastIgnoredNewDuplicatesCount:(long long)a0;
- (void)ABPersonSetShortNameFormatEnabled:(BOOL)a0;
- (id)displayedContactsFilterRepresentationPref;
- (void)setDisplayedContactsFilterRepresentationPref:(id)a0;
- (unsigned int)ABPersonGetShortNameFormat;
- (unsigned int)ABPersonGetSortOrdering;
- (BOOL)ABPersonGetShortNameFormatEnabled;
- (id)abDefaultCountryCode;
- (long long)lastIgnoredNewDuplicatesCount;
- (BOOL)ABPersonGetShortNamePreferNicknames;
- (void)ABPersonSetCompositeNameFormat:(unsigned int)a0;
- (void)ABPersonSetShortNamePreferNicknames:(BOOL)a0;

@end
