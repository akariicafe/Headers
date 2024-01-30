@class NSString, DNDSCoreDataBackingStore, DNDSIDSSyncEngine;

@interface DNDSAppSpecificSettingsManager : NSObject <DNDSIDSSyncEngineDataSource> {
    DNDSIDSSyncEngine *_idsSyncEngine;
}

@property (readonly, nonatomic) DNDSCoreDataBackingStore *store;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)appSpecificSettingsOfType:(Class)a0 modeIdentifier:(id)a1 error:(id *)a2;
- (void)idsSyncEngine:(id)a0 didFetchRecord:(id)a1;
- (void)idsSyncEngine:(id)a0 prepareRecordToSave:(inout id)a1;
- (BOOL)setAppSpecificSettings:(id)a0 identifier:(id)a1 type:(Class)a2 applicationIdentifier:(id)a3 modeIdentifier:(id)a4 error:(id *)a5;
- (void)_allPerModeSettingsMOsOfType:(Class)a0 processBlock:(id /* block */)a1;
- (id)appActionWithIdentifier:(id)a0 forApplicationIdentifier:(id)a1 modeIdentifier:(id)a2 error:(id *)a3;
- (void)purgeRecordsForIDSSyncEngine:(id)a0;
- (id)recordIDsForIDSSyncEngine:(id)a0;
- (id)appSpecificSettingsOfType:(Class)a0 identifier:(id)a1 modeIdentifier:(id)a2 applicationIdentifier:(id)a3 error:(id *)a4;
- (id)_allAppSpecificSettingsOfType:(Class)a0;
- (id)appConfigurationTargetContentIdentifierPrefixForActionIdentifier:(id)a0 forApplicationIdentifier:(id)a1 modeIdentifier:(id)a2 error:(id *)a3;
- (void)idsSyncEngine:(id)a0 recordWithIDWasDeleted:(id)a1;
- (BOOL)removeAppSpecificSettingsForApplicationIdentifier:(id)a0 error:(id *)a1;
- (id)appConfigurationPredicateForActionIdentifier:(id)a0 forApplicationIdentifier:(id)a1 modeIdentifier:(id)a2 error:(id *)a3;
- (id)init;
- (id)initWithIDSSyncEngine:(id)a0 backingStoreURL:(id)a1;
- (id)modeSpecificSettingsOfType:(Class)a0 identifier:(id)a1 modeIdentifier:(id)a2 error:(id *)a3;
- (id)appConfigurationPredicateForApplicationIdentifier:(id)a0 modeIdentifier:(id)a1 error:(id *)a2;
- (id)modeSpecificSettingsOfType:(Class)a0 modeIdentifier:(id)a1 error:(id *)a2;
- (id)appConfigurationTargetContentIdentifierPrefixForApplicationIdentifier:(id)a0 modeIdentifier:(id)a1 error:(id *)a2;
- (id)_perModeSettingsMOsOfType:(Class)a0 modeIdentifier:(id)a1 processBlock:(id /* block */)a2;
- (id)removeModeSpecificSettingsForModeIdentifiersNotInModeIdentifiers:(id)a0 error:(id *)a1;
- (void)_modesToSave:(id)a0 modesToDelete:(id)a1;
- (id)appSpecificSettingsOfType:(Class)a0 modeIdentifier:(id)a1 applicationIdentifier:(id)a2 error:(id *)a3;
- (BOOL)setModeSpecificSettings:(id)a0 identifier:(id)a1 type:(Class)a2 modeIdentifier:(id)a3 error:(id *)a4;
- (id)systemActionWithIdentifier:(id)a0 modeIdentifier:(id)a1 error:(id *)a2;
- (id)_allModeSpecificSettingsOfType:(Class)a0;
- (id)_initWithBackingStoreURL:(id)a0;
- (BOOL)removeModeSpecificSettingsForModeIdentifier:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
