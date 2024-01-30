@class NSArray;

@interface TSUObjectSnapshot : NSObject {
    unsigned long long mEntryCount;
    void **mSnapshot;
    NSArray *mCompared;
}

- (void)dealloc;
- (id)init;
- (void)p_clear;
- (void)compare;
- (void)calibrate:(id)a0;

@end
