@class NSMutableArray;

@interface TSUDateFormatCategory : NSObject {
    struct __CFDateFormatter { } *mInitialFormatter;
    NSMutableArray *mEntries;
}

- (void)dealloc;
- (struct __CFDate { } *)newDateFromString:(struct __CFString { } *)a0 forceAllowAMPM:(BOOL)a1 successfulFormatString:(const struct __CFString **)a2 perfect:(BOOL *)a3;
- (id)initWithInitialPattern:(id)a0 locale:(struct __CFLocale { } *)a1;
- (void)addSeparator:(unsigned short)a0 format:(id)a1 locale:(struct __CFLocale { } *)a2;
- (id)entryForSeparator:(unsigned short)a0;

@end
