@class NSString, NSDictionary, NSArray, CKPCSDiagnosticInformation;

@interface CKDFetchRecordZonePCSDiagnosticsOperation : CKDDatabaseOperation

@property (retain, nonatomic) NSString *identityStatus;
@property (retain, nonatomic) NSDictionary *invalidPCSByZoneID;
@property (retain, nonatomic) NSDictionary *validPCSByZoneID;
@property (retain, nonatomic) NSArray *recordZoneIDs;
@property (retain, nonatomic) CKPCSDiagnosticInformation *pcsDiagnosticInfo;

- (int)operationType;
- (id)activityCreate;
- (id)relevantZoneIDs;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (void)main;
- (void)_handleRecordZoneFetch:(id)a0 zoneID:(id)a1 responseCode:(id)a2;
- (void).cxx_destruct;

@end
