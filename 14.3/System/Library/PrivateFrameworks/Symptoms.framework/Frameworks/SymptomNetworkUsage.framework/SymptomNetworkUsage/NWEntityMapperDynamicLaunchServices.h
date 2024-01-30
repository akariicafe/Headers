@class EntityMapCache;

@interface NWEntityMapperDynamicLaunchServices : NWEntityMapperNEHelper {
    EntityMapCache *_entityMap;
}

- (id)init;
- (void).cxx_destruct;
- (id)stateDictionary;
- (id)identifierForUUID:(id)a0 derivation:(int *)a1;
- (id)handleNewUUID:(id)a0;
- (id)_attemptConvertingPluginNameToContainingAppName:(id)a0;
- (id)_identifierForUUID:(id)a0 fromSet:(id)a1;

@end
