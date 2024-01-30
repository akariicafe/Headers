@class NSCondition, TSULocale, NSMutableArray;

@interface TSUDateParserLibrary : NSObject {
    TSULocale *mLocale;
    unsigned long long mMaxPermittedParsers;
    unsigned long long mNumberOfUses;
    unsigned long long mParsersCreated;
    NSMutableArray *mAvailableDateParsers;
    NSCondition *mParserLibraryConditionVariable;
}

- (void).cxx_destruct;
- (id)initWithLocale:(id)a0;
- (id)checkoutDateParser;
- (void)returnDateParser:(id)a0;
- (void)prepareDateParserInBackground;

@end
