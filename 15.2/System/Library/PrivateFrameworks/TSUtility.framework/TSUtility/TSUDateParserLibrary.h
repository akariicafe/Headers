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

- (unsigned long long)retainCount;
- (id)retain;
- (id)autorelease;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (oneway void)release;
- (id)checkoutDateParser;
- (void)returnDateParser:(id)a0;

@end
