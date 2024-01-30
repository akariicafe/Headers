@class NSMutableArray;

@interface TSUDateFormatCategory : NSObject {
    struct __CFDateFormatter { } *_initialFormatter;
    NSMutableArray *_entries;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initialPattern;
- (id)formatStringsDictionary;
- (id)newDateFromString:(id)a0 forceAllowAMPM:(BOOL)a1 successfulFormatString:(id *)a2 perfect:(BOOL *)a3;
- (id)initWithInitialPattern:(id)a0 locale:(id)a1;
- (void)addSeparator:(unsigned short)a0 format:(id)a1 locale:(id)a2;
- (id)entryForSeparator:(unsigned short)a0;

@end
