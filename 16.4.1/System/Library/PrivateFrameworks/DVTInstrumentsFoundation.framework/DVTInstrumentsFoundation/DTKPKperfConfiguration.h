@class DTKPCPUCounterAllocator, NSArray, NSString, DTKPTriggerPMI, DTKPKDebugCodeSet, DTKPTriggerKDebug, NSMutableArray;

@interface DTKPKperfConfiguration : NSObject <DTKPConfiguration, DTKPTriggerCounterAllocatorProvider> {
    DTKPKDebugCodeSet *_kdebugCodeSet;
    DTKPTriggerKDebug *_triggerKDebug;
    DTKPTriggerPMI *_triggerPMI;
    NSMutableArray *_allTriggerTimes;
    NSMutableArray *_allTriggers;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _lock;
    DTKPCPUCounterAllocator *_counterAllocator;
}

@property (nonatomic) unsigned long long bufferSize;
@property (readonly, nonatomic) DTKPKDebugCodeSet *queryCodeSet;
@property (readonly, nonatomic) NSArray *triggers;
@property (readonly, nonatomic) unsigned int enabledKPCClasses;
@property (readonly, nonatomic) BOOL hasEnabledKPCClasses;
@property (nonatomic) unsigned char collectionMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id).cxx_construct;
- (id)apply;
- (id)init;
- (void).cxx_destruct;
- (id)reset;
- (void)clearTriggerPMI;
- (id)_disableContextSwitchSampling;
- (void)_disableKdebugCodes;
- (id)_enableContextSwitchSampling;
- (void)_enableKdebugCodes;
- (id)_reinitializeKperf;
- (id)_validateConfigLocked;
- (void)addCodeSet:(id)a0;
- (id)allTriggerTime;
- (void)clearAllTriggerTime;
- (void)clearTriggerKDebug;
- (void)clearTriggerTimeAtIndex:(unsigned long long)a0;
- (id)counterAllocator;
- (id)createTriggerKDebug:(id *)a0;
- (id)createTriggerPMI:(id *)a0;
- (id)createTriggerTime:(id *)a0;
- (id)firstTriggerTime;
- (id)generateConfigWords;
- (id)queryCounterAllocator;
- (id)triggerKDebug;
- (id)triggerPMI;

@end
