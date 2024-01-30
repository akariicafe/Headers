@class NSString, NSMutableDictionary;

@interface NWEntityMapperProcessWatcher : NWEntityMapper {
    NSMutableDictionary *_uuidProcessNameMap;
    NSString *_niluuidProcessName;
}

- (id)init;
- (void).cxx_destruct;
- (id)stateDictionary;
- (id)identifierForUUID:(id)a0 derivation:(int *)a1;
- (void)noteUUID:(id)a0 forProcessName:(id)a1;
- (void)_uuidProcessNameMapPrune;

@end
