@class NSString, _PASLock;

@interface SGNamedEntityDissector : SGPipelineDissector <SGMailMessageProcessing, SGTextMessageProcessing> {
    _PASLock *_lock;
    BOOL _significanceCheckEnabled;
    int _linguisticDataNotificationToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_registerForNotifications;
- (id)init;
- (void)_collectNLPTaggerResultsWithText:(id)a0 ddMatches:(id)a1 eligibleRegions:(id)a2 isMessagesSource:(BOOL)a3 addNamedEntity:(id /* block */)a4;
- (void).cxx_destruct;
- (id)_collectDataDetectorsWithText:(id)a0 algorithms:(id)a1 dataDetections:(id)a2 isMessagesSource:(BOOL)a3 lookupQids:(id)a4 addNamedEntity:(id /* block */)a5;
- (void)dealloc;
- (id)entitiesInPlainText:(id)a0 withEligibleRegions:(id)a1 source:(id)a2 cloudSync:(BOOL)a3 algorithms:(id)a4;
- (void)_collectCustomTaggerResultsWithText:(id)a0 eligibleRegions:(id)a1 isMessagesSource:(BOOL)a2 addNamedEntity:(id /* block */)a3;
- (void)dissectTextMessage:(id)a0 entity:(id)a1 context:(id)a2;
- (id)_entitiesInPlainText:(id)a0 withEligibleRegions:(id)a1 dataDetections:(id)a2 source:(id)a3 cloudSync:(BOOL)a4 algorithms:(id)a5;
- (void)_harvestLocationFromEntity:(id)a0 category:(unsigned long long)a1 dynamicCategory:(id)a2 enrichment:(id)a3 algorithm:(unsigned short)a4;
- (id)initWithSignificanceCheckEnabled:(BOOL)a0;
- (void)_dissectMessage:(id)a0 entity:(id)a1 context:(id)a2;
- (void)dissectMailMessage:(id)a0 entity:(id)a1 context:(id)a2;

@end
