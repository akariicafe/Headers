@class NSArray;

@interface CKDFetchRecordPCSDiagnosticsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *recordZoneIDs;


- (void).cxx_destruct;

@end
