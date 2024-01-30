@class _PASLock, NSString;

@interface PPNamedEntityDissector : NSObject {
    int _linguisticDataNotificationToken;
    _PASLock *_lock;
    NSString *_userLanguage;
    BOOL _userIsMultilingual;
    NSString *_meCardContactsIdentifier;
}

+ (id)sharedInstance;

- (void)_registerForNotifications;
- (void)_resetGazetteer;
- (id)entitiesInPlainText:(id)a0 eligibleRegions:(id)a1 source:(id)a2 cloudSync:(BOOL)a3 algorithms:(id)a4;
- (void)_collectAugmentedGazetteerWithText:(id)a0 addNamedEntity:(id /* block */)a1 addTopic:(id /* block */)a2 addLocation:(id /* block */)a3;
- (void)dealloc;
- (id)initWithPurgeableGazetteer:(id)a0;
- (id)entitiesInPlainText:(id)a0 eligibleRegions:(id)a1 source:(id)a2 cloudSync:(BOOL)a3;
- (id)_collectDataDetectorsWithText:(id)a0 algorithms:(id)a1 isMessagesSource:(BOOL)a2 addNamedEntity:(id /* block */)a3;
- (id)init;
- (void).cxx_destruct;
- (void)_harvestLocationFromEntity:(id)a0 category:(unsigned long long)a1 dynamicCategory:(id)a2 enrichment:(id)a3 algorithm:(unsigned short)a4;

@end
