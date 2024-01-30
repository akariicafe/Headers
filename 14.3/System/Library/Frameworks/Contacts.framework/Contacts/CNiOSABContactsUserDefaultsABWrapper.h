@interface CNiOSABContactsUserDefaultsABWrapper : NSObject

- (void)setDisplayedContactsFilterRepresentationPref:(id)a0;
- (unsigned int)ABPersonGetShortNameFormat;
- (unsigned int)ABPersonGetSortOrdering;
- (unsigned int)ABPersonGetEditNameFormat;
- (void)ABPersonSetShortNameFormat:(unsigned int)a0;
- (BOOL)ABPersonGetShortNamePreferNicknames;
- (void)ABPersonSetCompositeNameFormat:(unsigned int)a0;
- (unsigned int)ABPersonGetCompositeNameFormatForRecord:(void *)a0;
- (void)ABPersonSetShortNamePreferNicknames:(BOOL)a0;
- (BOOL)ABPersonGetShortNameFormatEnabled;
- (id)abDefaultCountryCode;
- (void)ABPersonSetShortNameFormatEnabled:(BOOL)a0;
- (id)displayedContactsFilterRepresentationPref;

@end
