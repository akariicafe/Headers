@class NSMutableArray, NSCondition;

@interface TSUDateParserLibrary : NSObject {
    unsigned long long mMaxPermittedParsers;
    unsigned long long mNumberOfUses;
    unsigned long long mParsersCreated;
    NSMutableArray *mAvailableDateParsers;
    NSCondition *mParserLibraryConditionVariable;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)_singletonAlloc;
+ (id)sharedDateParserLibrary;

- (id)init;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)checkoutDateParser;
- (void)returnDateParser:(id)a0;

@end
