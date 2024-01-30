@class NSMutableDictionary;

@interface NWEntityMapperCoalitionWatcher : NWEntityMapper {
    NSMutableDictionary *_uuidCoalitionNameMap;
}

- (BOOL)noteUUID:(id)a0 forPid:(int)a1;
- (id)identifierForUUID:(id)a0 derivation:(int *)a1;
- (void).cxx_destruct;
- (id)init;
- (void)_uuidCoalitionNameMapPrune;

@end
