@class EntityMapCache;

@interface NWEntityMapperDynamicLaunchServices : NWEntityMapperNEHelper {
    EntityMapCache *_entityMap;
}

- (id)stateDictionary;
- (id)handleNewUUID:(id)a0;
- (id)_attemptConvertingPluginNameToContainingAppName:(id)a0;
- (id)identifierForUUID:(id)a0 derivation:(int *)a1;
- (id)init;
- (void).cxx_destruct;
- (id)_identifierForUUID:(id)a0 fromSet:(id)a1;

@end
