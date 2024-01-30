@interface TSUserFilteredClock : TSKernelClock

@property (readonly, nonatomic) unsigned long long nominalMachInterval;
@property (readonly, nonatomic) unsigned long long nominalDomainInterval;
@property (readonly, nonatomic) unsigned char filterShift;
@property (readonly, nonatomic, getter=isAdaptive) BOOL adaptive;

+ (id)iokitMatchingDictionaryForClockIdentifier:(unsigned long long)a0;

- (BOOL)resetFilterToNominal:(BOOL)a0 error:(id *)a1;
- (unsigned long long)nominalMachInterval;
- (unsigned char)filterShift;
- (unsigned long long)nominalDomainInterval;
- (BOOL)resetSyncServiceWithError:(id *)a0;
- (BOOL)addTimestampWithMachAbsolute:(unsigned long long)a0 andDomainTime:(unsigned long long)a1 error:(id *)a2;

@end
