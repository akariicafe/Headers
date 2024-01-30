@class NSArray;

@interface SBGreenController : NSObject {
    NSArray *_relevantGreenKeys;
    unsigned long long _fileExistenceState;
}

- (id)init;
- (void).cxx_destruct;
- (id)_defaultValuesDictionaryAndState:(unsigned long long *)a0;
- (id)_deviceRegionCode;
- (unsigned long long)_effectivePlaceIsAmbiguous:(BOOL *)a0;
- (void)_readFileStateFromDisk;
- (BOOL)_writeGreenValuesToDisk:(id)a0 withState:(unsigned long long)a1;
- (void)performPreBuddyWork;

@end
