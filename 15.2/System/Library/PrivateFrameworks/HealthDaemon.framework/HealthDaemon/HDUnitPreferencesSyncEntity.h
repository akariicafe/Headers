@class NSString, HDSyncEntityIdentifier;

@interface HDUnitPreferencesSyncEntity : HDKeyValueSyncEntity <HDNanoSyncEntity>

@property (class, readonly, copy, nonatomic) HDSyncEntityIdentifier *syncEntityIdentifier;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)category;
+ (void)didReceiveValuesForKeys:(id)a0 profile:(id)a1;
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)a0;
+ (int)nanoSyncObjectType;
+ (id)syncEntityDependenciesForSyncProtocolVersion:(int)a0;


@end
