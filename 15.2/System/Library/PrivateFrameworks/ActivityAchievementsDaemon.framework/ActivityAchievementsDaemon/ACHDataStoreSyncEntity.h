@class NSString, HDSyncEntityIdentifier;

@interface ACHDataStoreSyncEntity : HDKeyValueSyncEntity <HDNanoSyncEntity>

@property (class, readonly, copy, nonatomic) HDSyncEntityIdentifier *syncEntityIdentifier;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)category;
+ (void)didReceiveValuesForKeys:(id)a0 profile:(id)a1;
+ (id)dataStoreValueForKey:(id)a0 domain:(id)a1 profile:(id)a2 error:(id *)a3;
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)a0;
+ (int)nanoSyncObjectType;
+ (BOOL)setDataStoreValuesWithDictionary:(id)a0 domain:(id)a1 profile:(id)a2 error:(id *)a3;
+ (BOOL)removeDataStoreValuesForKeys:(id)a0 domain:(id)a1 profile:(id)a2 error:(id *)a3;


@end
