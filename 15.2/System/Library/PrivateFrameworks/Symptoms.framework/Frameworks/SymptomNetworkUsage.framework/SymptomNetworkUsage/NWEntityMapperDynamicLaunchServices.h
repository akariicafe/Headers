@class EntityMapCache;

@interface NWEntityMapperDynamicLaunchServices : NWEntityMapperNEHelper {
    EntityMapCache *_entityMap;
}

- (id)_attemptConvertingPluginNameToContainingAppName:(id)a0;
- (id)identifierForUUID:(id)a0 derivation:(int *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)handleNewUUID:(id)a0;
- (id)_identifierForUUID:(id)a0 fromSet:(id)a1;
- (id)stateDictionary;

@end
