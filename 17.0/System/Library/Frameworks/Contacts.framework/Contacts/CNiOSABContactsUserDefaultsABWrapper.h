@interface CNiOSABContactsUserDefaultsABWrapper : NSObject

- (unsigned int)ABPersonGetCompositeNameFormatForRecord:(void *)a0;
- (id)abDefaultCountryCode;
- (BOOL)ABPersonGetShortNamePreferNicknames;
- (id)displayedContactsFilterRepresentationPref;
- (void)setDisplayedContactsFilterRepresentationPref:(id)a0;
- (void)ABPersonSetShortNameFormat:(unsigned int)a0;
- (unsigned int)ABPersonGetShortNameFormat;
- (unsigned int)ABPersonGetSortOrdering;
- (void)ABPersonSetShortNameFormatEnabled:(BOOL)a0;
- (unsigned int)ABPersonGetEditNameFormat;
- (void)setLastIgnoredNewDuplicatesCount:(long long)a0;
- (void)ABPersonSetCompositeNameFormat:(unsigned int)a0;
- (long long)lastIgnoredNewDuplicatesCount;
- (BOOL)ABPersonGetShortNameFormatEnabled;
- (void)ABPersonSetShortNamePreferNicknames:(BOOL)a0;

@end
