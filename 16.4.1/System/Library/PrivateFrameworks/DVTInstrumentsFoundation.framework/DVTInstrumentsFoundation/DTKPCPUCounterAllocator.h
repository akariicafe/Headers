@class DTKPCPU, DTKPCPUCounterAllocatorRecord, NSMutableArray;

@interface DTKPCPUCounterAllocator : NSObject {
    struct kpep_config { } *_kpepConfig;
    NSMutableArray *_eventRecords;
    unsigned long long _fixedCounterCount;
    unsigned long long _configurableCounterCount;
    unsigned long long _eventsUniqueIds;
}

@property (readonly, nonatomic) unsigned int kpcClasses;
@property (readonly, retain, nonatomic) DTKPCPU *cpu;
@property (readonly, retain, nonatomic) DTKPCPUCounterAllocatorRecord *allocatedPMIRecord;
@property (readonly, nonatomic) unsigned long long pmcEventCount;
@property (readonly, nonatomic) BOOL pmiEnabled;
@property (readonly, nonatomic) unsigned long long pmiThreshold;

- (void)dealloc;
- (void).cxx_destruct;
- (unsigned long long)_counterIndexForEvent:(id)a0 absolute:(BOOL)a1 error:(id *)a2;
- (id)_counterNameForEvent:(id)a0 error:(id *)a1;
- (void)_enumerateAllocatedPMCsWithIndex:(id /* block */)a0;
- (BOOL)_eventExists:(id)a0 eventOut:(id *)a1;
- (unsigned int)_getCurrentClasses:(id *)a0;
- (unsigned long long)_hardwareEventCount;
- (BOOL)_matchesPMIEvent:(id)a0;
- (int)_setErrorFromKpepError:(int)a0 eventName:(id)a1 error:(id *)a2;
- (int)addPMCEventName:(id)a0 error:(id *)a1;
- (int)configureHardwareCounters:(id *)a0;
- (int)configureHardwarePMIPeriods:(id *)a0;
- (int)configurePMIActionID:(unsigned int)a0 error:(id *)a1;
- (void)enumerateAllocatedPMCs:(id /* block */)a0;
- (int)forceCounters:(id *)a0;
- (id)initWithCPU:(id)a0 error:(id *)a1;
- (unsigned long long)recordConfigWordsIntoBuffer:(unsigned long long *)a0;
- (int)setPMIEventName:(id)a0 pmiThreshold:(unsigned long long)a1 error:(id *)a2;
- (int)startHardwareCounters:(id *)a0;
- (int)stopHardwareCounters:(id *)a0;
- (int)unforceCounters:(id *)a0;

@end
