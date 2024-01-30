@class NSString, _PASLock;

@interface SGNamedEntityDissector : SGPipelineDissector <SGMailMessageProcessing, SGTextMessageProcessing> {
    int _linguisticDataNotificationToken;
    _PASLock *_lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)_entitiesInPlainText:(id)a0 withEligibleRegions:(id)a1 dataDetections:(id)a2 source:(id)a3 cloudSync:(BOOL)a4 algorithms:(id)a5;
- (void)_registerForNotifications;
- (void)_resetGazetteer;
- (id)_collectDataDetectorsWithText:(id)a0 algorithms:(id)a1 dataDetections:(id)a2 isMessagesSource:(BOOL)a3 addNamedEntity:(id /* block */)a4;
- (void)_harvestLocationFromEntity:(id)a0 category:(unsigned long long)a1 dynamicCategory:(id)a2 enrichment:(id)a3 algorithm:(unsigned short)a4;
- (void)_collectAugmentedGazetteerWithText:(id)a0 addNamedEntity:(id /* block */)a1 addTopic:(id /* block */)a2 addLocation:(id /* block */)a3;
- (id)entitiesInPlainText:(id)a0 withEligibleRegions:(id)a1 source:(id)a2 cloudSync:(BOOL)a3 algorithms:(id)a4;
- (id)initWithPurgeableGazetteer:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dissectTextMessage:(id)a0 entity:(id)a1 context:(id)a2;
- (void)dealloc;
- (void)_dissectMessage:(id)a0 entity:(id)a1 context:(id)a2;
- (void)dissectMailMessage:(id)a0 entity:(id)a1 context:(id)a2;

@end
