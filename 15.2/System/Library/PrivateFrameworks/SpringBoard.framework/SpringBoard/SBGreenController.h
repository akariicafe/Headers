@class NSArray;

@interface SBGreenController : NSObject {
    NSArray *_relevantGreenKeys;
    unsigned long long _fileExistenceState;
}

- (void).cxx_destruct;
- (id)init;
- (void)performPreBuddyWork;
- (void)_readFileStateFromDisk;
- (id)_defaultValuesDictionaryAndState:(unsigned long long *)a0;
- (BOOL)_writeGreenValuesToDisk:(id)a0 withState:(unsigned long long)a1;
- (unsigned long long)_effectivePlaceIsAmbiguous:(BOOL *)a0;
- (id)_deviceRegionCode;

@end
