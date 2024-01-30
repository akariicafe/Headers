@interface CNiOSABContactsUserDefaultsABWrapper : NSObject

- (void)ABPersonSetShortNameFormatEnabled:(BOOL)a0;
- (unsigned int)ABPersonGetShortNameFormat;
- (void)ABPersonSetShortNamePreferNicknames:(BOOL)a0;
- (BOOL)ABPersonGetShortNamePreferNicknames;
- (BOOL)ABPersonGetShortNameFormatEnabled;
- (void)ABPersonSetShortNameFormat:(unsigned int)a0;
- (id)displayedContactsFilterRepresentationPref;
- (unsigned int)ABPersonGetCompositeNameFormatForRecord:(void *)a0;
- (id)abDefaultCountryCode;
- (unsigned int)ABPersonGetEditNameFormat;
- (void)setDisplayedContactsFilterRepresentationPref:(id)a0;
- (void)ABPersonSetCompositeNameFormat:(unsigned int)a0;
- (unsigned int)ABPersonGetSortOrdering;

@end
