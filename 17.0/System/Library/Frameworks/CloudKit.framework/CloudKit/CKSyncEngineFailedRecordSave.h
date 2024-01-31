@class NSError, CKRecord, NSString;

@interface CKSyncEngineFailedRecordSave : NSObject <CKPropertiesDescription>

@property (readonly, nonatomic) CKRecord *record;
@property (readonly, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)CKDescribePropertiesUsing:(id)a0;
- (id)redactedDescription;
- (void).cxx_destruct;
- (id)initWithRecord:(id)a0 error:(id)a1;
- (BOOL)CKDescriptionShouldPrintPointer;
- (id)CKDescriptionClassName;

@end
