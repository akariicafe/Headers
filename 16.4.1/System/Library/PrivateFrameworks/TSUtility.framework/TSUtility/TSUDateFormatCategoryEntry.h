@class NSMutableSet;

@interface TSUDateFormatCategoryEntry : NSObject {
    unsigned short mSeparator;
    struct __CFArray { } *mFormatters;
    NSMutableSet *mFormatStrings;
}

- (unsigned short)separator;
- (void)dealloc;
- (void)addFormat:(id)a0 locale:(struct __CFLocale { } *)a1;
- (id)initWithSeparator:(unsigned short)a0;
- (struct __CFDate { } *)newDateFromString:(struct __CFString { } *)a0 forceAllowAMPM:(BOOL)a1 successfulFormatString:(const struct __CFString **)a2 perfect:(BOOL *)a3;

@end
