@class NSString, NSDate, MXMInstrument, NSObject;
@protocol OS_dispatch_semaphore;

@interface MXMOSSignpostMetric : MXMMetric {
    NSDate *_startDate;
    NSDate *_stopDate;
    unsigned long long _startMachContTime;
    unsigned long long _stopMachContTime;
    NSObject<OS_dispatch_semaphore> *_startDate_semaphore;
    NSObject<OS_dispatch_semaphore> *_stopDate_semaphore;
}

@property (readonly, copy, nonatomic) MXMInstrument *instrument;
@property (readonly, nonatomic) NSString *subsystem;
@property (readonly, nonatomic) NSString *category;
@property (readonly, nonatomic) NSString *name;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithSubsystem:(id)a0 category:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)_sampleMode;
- (BOOL)_shouldConstructProbe;
- (id)_constructProbe;
- (void)didStartAtTime:(unsigned long long)a0 startDate:(id)a1;
- (void)didStartAtContinuousTime:(unsigned long long)a0 absoluteTime:(unsigned long long)a1 startDate:(id)a2;
- (void)didStopAtTime:(unsigned long long)a0 stopDate:(id)a1;
- (void)didStopAtContinuousTime:(unsigned long long)a0 absoluteTime:(unsigned long long)a1 stopDate:(id)a2;
- (BOOL)_shouldAlwaysWrapInProxy;
- (BOOL)_shouldNeverWrapInProxy;
- (id)initWithSubsystem:(id)a0;
- (id)initWithSubsystem:(id)a0 category:(id)a1 name:(id)a2;

@end
