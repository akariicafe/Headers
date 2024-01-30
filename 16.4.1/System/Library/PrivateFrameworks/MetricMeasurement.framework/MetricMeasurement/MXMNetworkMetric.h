@class NSString, NSNumber, MXMInstrument;

@interface MXMNetworkMetric : MXMMetric

@property (class, readonly, copy, nonatomic) MXMNetworkMetric *currentProcess;

@property (readonly, copy, nonatomic) NSString *processName;
@property (readonly, copy, nonatomic) NSNumber *processIdentifier;
@property (readonly, copy, nonatomic) MXMInstrument *instrument;

- (id)initWithProcessIdentifier:(int)a0;
- (id)initWithBundleIdentifier:(id)a0;
- (id)initWithProcessName:(id)a0;
- (id)_constructProbe;
- (BOOL)_shouldConstructProbe;
- (id)initWithIdentifier:(id)a0 filter:(id)a1;

@end
