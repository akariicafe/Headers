@class MXMInstrument, NSString, NSNumber;

@interface MXMMemoryMetric : MXMMetric

@property (class, readonly, copy, nonatomic) MXMMemoryMetric *currentProcess;

@property (readonly, copy, nonatomic) NSString *processName;
@property (readonly, copy, nonatomic) NSNumber *processIdentifier;
@property (readonly, copy, nonatomic) MXMInstrument *instrument;

- (id)initWithBundleIdentifier:(id)a0;
- (id)initWithProcessIdentifier:(int)a0;
- (id)initWithProcessName:(id)a0;
- (id)initWithIdentifier:(id)a0 filter:(id)a1;
- (void)willStartAtEstimatedTime:(unsigned long long)a0;
- (BOOL)_shouldConstructProbe;
- (id)_constructProbe;

@end
