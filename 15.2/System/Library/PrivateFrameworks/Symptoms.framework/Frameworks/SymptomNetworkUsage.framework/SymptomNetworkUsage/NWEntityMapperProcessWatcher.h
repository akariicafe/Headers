@class NSString, NSMutableDictionary;

@interface NWEntityMapperProcessWatcher : NWEntityMapper {
    NSMutableDictionary *_uuidProcessNameMap;
    NSString *_niluuidProcessName;
}

- (void)_uuidProcessNameMapPrune;
- (id)identifierForUUID:(id)a0 derivation:(int *)a1;
- (void).cxx_destruct;
- (id)init;
- (void)noteUUID:(id)a0 forProcessName:(id)a1;
- (id)stateDictionary;

@end
