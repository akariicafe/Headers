@class NSDate, HMDMetricsDateProvider;
@protocol HMDTimeBasedFlagContext;

@interface HMDTimeBasedFlagDaily : NSObject <HMDTimeBasedFlag> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, weak, nonatomic) id<HMDTimeBasedFlagContext> context;
@property (readonly, nonatomic) HMDMetricsDateProvider *dateProvider;
@property unsigned long long bits;
@property (retain) NSDate *bit0Date;

+ (id)convertLegacyFlagBits:(id)a0 lastSaveTIme:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (id)serializeToDictionary;
- (unsigned long long)_bitMaskForDate:(id)a0;
- (unsigned long long)bitsForDate:(id)a0 bitCount:(long long)a1 outValidBitCount:(long long *)a2;
- (unsigned long long)currentBits;
- (id)initWithContext:(id)a0 dateProvider:(id)a1;
- (id)initWithSerializedFlag:(id)a0 context:(id)a1 dateProvider:(id)a2;
- (void)setBitForDate:(id)a0;
- (void)setCurrentBit;

@end
