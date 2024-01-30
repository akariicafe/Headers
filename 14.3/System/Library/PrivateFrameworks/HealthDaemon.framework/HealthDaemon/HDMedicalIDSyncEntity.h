@class NSString, HDSyncEntityIdentifier;

@interface HDMedicalIDSyncEntity : NSObject <HDSyncEntity>

@property (class, readonly, copy, nonatomic) HDSyncEntityIdentifier *syncEntityIdentifier;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSyncStore:(id)a0;
+ (BOOL)generateSyncObjectsForSession:(id)a0 syncAnchorRange:(struct HDSyncAnchorRange { long long x0; long long x1; })a1 profile:(id)a2 messageHandler:(id)a3 error:(id *)a4;
+ (long long)receiveSyncObjects:(id)a0 syncStore:(id)a1 profile:(id)a2 error:(id *)a3;
+ (id)syncEntityDependenciesForSyncProtocolVersion:(int)a0;
+ (id)decodeSyncObjectWithData:(id)a0;
+ (long long)nextSyncAnchorWithSession:(id)a0 startSyncAnchor:(long long)a1 profile:(id)a2 error:(id *)a3;
+ (BOOL)touchSyncAnchorIfNecessaryWithProfile:(id)a0 error:(id *)a1;
+ (BOOL)incrementSyncAnchorWithProfile:(id)a0 error:(id *)a1;
+ (BOOL)setSyncProvenance:(id)a0 profile:(id)a1 error:(id *)a2;
+ (BOOL)_touchSyncAnchorWithProfile:(id)a0 shouldIncrement:(BOOL)a1 error:(id *)a2;
+ (long long)_getCurrentSyncAnchorWithProfile:(id)a0 error:(id *)a1;
+ (BOOL)_setSyncAnchor:(long long)a0 profile:(id)a1 error:(id *)a2;
+ (id)getSyncProvencanceOfMedicalIDForProfile:(id)a0 error:(id *)a1;
+ (id)_codableFromMedicalID:(id)a0;
+ (id)_medicalIDFromCodable:(id)a0;


@end
