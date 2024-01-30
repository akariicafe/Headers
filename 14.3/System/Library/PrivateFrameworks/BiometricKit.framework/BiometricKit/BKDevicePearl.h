@protocol BKDevicePearlDelegate;

@interface BKDevicePearl : BKDevice

@property (weak, nonatomic) id<BKDevicePearlDelegate> delegate;
@property (readonly, nonatomic) long long pearlState;

+ (BOOL)deviceAvailableWithError:(id *)a0;

- (void)statusMessage:(unsigned int)a0 client:(unsigned long long)a1;
- (id)createMatchOperationWithError:(id *)a0;
- (id)createEnrollOperationWithError:(id *)a0;
- (id)createPresenceDetectOperationWithError:(id *)a0;
- (long long)deviceStateWithStatus:(unsigned int)a0;
- (long long)deviceEventWithStatus:(unsigned int)a0;
- (id)queryIdentityMigrationFailureForUser:(unsigned int)a0 error:(id *)a1;
- (BOOL)clearIdentityMigrationFailureForUser:(unsigned int)a0 error:(id *)a1;
- (id)eligibleForAugmentation:(id)a0 error:(id *)a1;
- (id)generateFieldDiagnosticsNonceWithError:(id *)a0;
- (BOOL)enableFieldDiagnosticsWithTatsuManifest:(id)a0 error:(id *)a1;
- (BOOL)disableFieldDiagnosticsWithError:(id *)a0;
- (id)fieldDiagnosticsRemainingTimeWithError:(id *)a0;
- (id)fieldDiagnosticsEncryptionKeyWithError:(id *)a0;
- (id)fieldDiagnosticsTatsuManifestWithError:(id *)a0;
- (BOOL)setTemplate:(id)a0 forIdentity:(id)a1 error:(id *)a2;

@end
