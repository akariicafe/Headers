@class NSArray;

@interface OITSUObjectSnapshot : NSObject {
    unsigned long long mEntryCount;
    void **mSnapshot;
    NSArray *mCompared;
}

- (id)init;
- (void)dealloc;
- (void)p_clear;
- (void)compare;
- (void)calibrate:(id)a0;

@end
