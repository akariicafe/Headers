@class NSString, DTAllocationsRecorder;

@interface DTObjectAllocService : DTXService <DTObjectAllocServiceLegacyAPI, DTObjectAllocServiceAuthorizedAPI> {
    unsigned int _task;
    DTAllocationsRecorder *_recorder;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerCapabilities:(id)a0;

- (void).cxx_destruct;
- (void)messageReceived:(id)a0;
- (id)initWithChannel:(id)a0;
- (id)attachToPid:(id)a0 eventsMask:(id)a1;
- (id)preparedEnvironmentForLaunch:(id)a0 eventsMask:(id)a1;
- (void)startCollectionWithPid:(int)a0;
- (void)stopCollection;

@end
