@class NSMutableDictionary;

@interface NWEntityMapperStaticAssignment : NWEntityMapper {
    NSMutableDictionary *_staticUUIDToBundleIDMap;
}

- (id)identifierForUUID:(id)a0 derivation:(int *)a1;
- (id)initWithFlavor:(id)a0;
- (void).cxx_destruct;

@end
