@class NSString, NSMutableDictionary;

@interface NWEntityMapperProcessWatcher : NWEntityMapper {
    NSMutableDictionary *_uuidProcessNameMap;
    NSString *_niluuidProcessName;
}

- (id)stateDictionary;
- (void)noteUUID:(id)a0 forProcessName:(id)a1;
- (id)identifierForUUID:(id)a0 derivation:(int *)a1;
- (void)_uuidProcessNameMapPrune;
- (id)init;
- (void).cxx_destruct;

@end
