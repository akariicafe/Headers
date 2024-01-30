@class NSCountedSet, NSMutableDictionary, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface CAMProtectionController : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_protectionQueue;
@property (readonly, nonatomic) NSCountedSet *_persistenceProtectionInflightRequestsByType;
@property (readonly, nonatomic) NSMutableDictionary *_persistenceProtectionFileDescriptorsByType;
@property (readonly, nonatomic) NSMutableDictionary *_burstProcessingProtectionFileDescriptorsByIdentifier;
@property (readonly, nonatomic) NSMutableSet *_nebulaDaemonWriteProtectionInflightIdentifiers;
@property (readonly, nonatomic) int _nebulaDaemonWriteProtectionFileDescriptor;

+ (id)pathForProtectNebulaDaemonWritesIndicator;
+ (BOOL)isCameraPerformingHighPriorityDiskActivity;

- (void)stopProtectingNebulaDaemonWritesForIdentifier:(id)a0;
- (void)startProtectingNebulaDaemonWritesForIdentifier:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_protectionQueueAbortProtectionForBurstProcessing;
- (int)_persistenceProtectionFileDescriptorForType:(long long)a0;
- (void)dealloc;
- (void)_protectionQueueRemoveBurstProcessingProtectionIndicatorForIdentifier:(id)a0;
- (long long)_persistenceProtectionTypeForRequest:(id)a0;
- (void)_protectionQueueStartProtectingPersistenceForType:(long long)a0 logIdentifier:(id)a1;
- (void)startProtectingPersistenceForRequest:(id)a0;
- (void)stopProtectingBurstProcessingForIdentifier:(id)a0;
- (void)_protectionQueueAbortProtectionForNebulaDaemonWritesForReason:(id)a0;
- (void)_protectionQueueRemovePersistenceProtectionIndicatorForType:(long long)a0 unlinkFile:(BOOL)a1 logIdentifier:(id)a2;
- (void)_protectionQueueStopProtectingNebulaDaemonWritesForIdentifier:(id)a0 closeFile:(BOOL)a1;
- (void)_protectionQueueAbortProtectionForProtectionTypes;
- (void)startProtectingBurstProcessingForIdentifier:(id)a0;
- (int)_burstProcessingProtectionFileDescriptorForIdentifier:(id)a0;
- (void)_addPersistenceProtectionIndicatorForType:(long long)a0 logIdentifier:(id)a1;
- (void)_protectionQueueStartProtectingNebulaDaemonWritesForIdentifier:(id)a0;
- (void)_protectionQueueStopProtectingPersistenceForType:(long long)a0 logIdentifier:(id)a1;
- (void)stopProtectingPersistenceForRequest:(id)a0;
- (id)_persistenceProtectionPathForType:(long long)a0;
- (void)_addBurstProcessingProtectionIndicatorForIdentifier:(id)a0;
- (void)abortOutstandingNebulaDaemonWriteProtectionsForReason:(id)a0;
- (id)_burstProcessingProtectionPathForIdentifier:(id)a0;

@end
