@class NSString, HDSyncEntityIdentifier;

@interface HDAuthorizationSyncEntity : NSObject <HDNanoSyncEntity, HDSyncEntity>

@property (class, readonly, copy, nonatomic) HDSyncEntityIdentifier *syncEntityIdentifier;
@property (class, readonly, copy, nonatomic) HDSyncEntityIdentifier *syncEntityIdentifier;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSyncStore:(id)a0;
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)a0;
+ (BOOL)generateSyncObjectsForSession:(id)a0 syncAnchorRange:(struct HDSyncAnchorRange { long long x0; long long x1; })a1 profile:(id)a2 messageHandler:(id)a3 error:(id *)a4;
+ (long long)receiveSyncObjects:(id)a0 syncStore:(id)a1 profile:(id)a2 error:(id *)a3;
+ (id)syncEntityDependenciesForSyncProtocolVersion:(int)a0;
+ (id)decodeSyncObjectWithData:(id)a0;
+ (long long)nextSyncAnchorWithSession:(id)a0 startSyncAnchor:(long long)a1 profile:(id)a2 error:(id *)a3;
+ (BOOL)companionDidChangeForProfile:(id)a0 error:(id *)a1;
+ (int)nanoSyncObjectType;
+ (id)createCodableSourceAuthorizationWithSource:(id)a0 syncSession:(id)a1;
+ (void)didGenerateCodableSourceAuthorizationsForSyncSession:(id)a0;


@end
