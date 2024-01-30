@class NSMutableDictionary;

@interface NWEntityMapperCoalitionWatcher : NWEntityMapper {
    NSMutableDictionary *_uuidCoalitionNameMap;
}

- (id)init;
- (void).cxx_destruct;
- (id)identifierForUUID:(id)a0 derivation:(int *)a1;
- (void)_uuidCoalitionNameMapPrune;
- (BOOL)noteUUID:(id)a0 forPid:(int)a1;

@end
