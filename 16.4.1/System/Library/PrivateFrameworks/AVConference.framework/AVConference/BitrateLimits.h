@class NSArray;

@interface BitrateLimits : NSObject {
    unsigned long long defaultValue;
    unsigned long long defaultValueCellular;
    unsigned long long defaultValue2G;
}

@property (readonly, nonatomic) NSArray *limits;

+ (unsigned long long)insertionIndex:(id)a0 forValue:(id)a1;

- (void)dealloc;
- (void)capDefaultValues:(unsigned long long)a0;
- (unsigned long long)defaultValueForNetwork:(BOOL)a0;
- (id)initWithOperatingMode:(int)a0 withBitrateCap:(unsigned long long)a1 useCaseWatchContinuity:(BOOL)a2;

@end
