@class TSUIntegerKeyDictionary, TSUIntToIntDictionary, TSSPropertySet;

@interface TSCHPropertyMigrator : NSObject {
    TSSPropertySet *_propertiesToForce;
    TSUIntToIntDictionary *_shouldForceFlags;
    TSUIntegerKeyDictionary *_valuesToForce;
}

- (id)initWithProperties:(id)a0;
- (void).cxx_destruct;
- (void)visitExistingSeries:(id)a0;
- (void)migrateToSeries:(id)a0;

@end
