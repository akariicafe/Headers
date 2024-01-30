@class NSString, HVQueues, NSObject, _PASLock;
@protocol OS_dispatch_queue;

@interface HVConsumerCoordinator : NSObject <HVQueueObserver> {
    _PASLock *_lock;
    NSObject<OS_dispatch_queue> *_serialQueue;
    HVQueues *_queues;
    NSString *_path;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultCoordinator;

- (BOOL)registerMailConsumer:(id)a0 levelOfService:(unsigned char)a1;
- (BOOL)registerPhotosConsumer:(id)a0 levelOfService:(unsigned char)a1;
- (id)initWithQueues:(id)a0 path:(id)a1;
- (BOOL)registerSafariConsumer:(id)a0 levelOfService:(unsigned char)a1;
- (BOOL)harvestContentWithMinimumLevelOfService:(unsigned char)a0 error:(id *)a1 shouldContinueBlock:(id /* block */)a2;
- (BOOL)registerRemindersConsumer:(id)a0 levelOfService:(unsigned char)a1;
- (BOOL)registerNewsConsumer:(id)a0 levelOfService:(unsigned char)a1;
- (BOOL)deleteContentWithRequest:(id)a0 error:(id *)a1;
- (void)disableConsumptionOfDataSources:(unsigned int)a0;
- (BOOL)registerParsecConsumer:(id)a0 levelOfService:(unsigned char)a1;
- (void)contentAvailableFromSources:(unsigned int)a0;
- (void)enableConsumptionOfDataSources:(unsigned int)a0;
- (BOOL)registerUserActivityConsumer:(id)a0 levelOfService:(unsigned char)a1;
- (BOOL)registerInteractionConsumer:(id)a0 levelOfService:(unsigned char)a1;
- (BOOL)registerSiriConsumer:(id)a0 levelOfService:(unsigned char)a1;
- (BOOL)registerThirdPartyAppConsumer:(id)a0 levelOfService:(unsigned char)a1;
- (void)restoreConsumptionOfDataSources:(unsigned int)a0;
- (id)init;
- (id)statsWithError:(id *)a0;
- (BOOL)registerNotesConsumer:(id)a0 levelOfService:(unsigned char)a1;
- (BOOL)registerMessagesConsumer:(id)a0 levelOfService:(unsigned char)a1;
- (void).cxx_destruct;

@end
