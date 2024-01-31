@class NSString, CKRecordID;

@interface CKSyncEngineFetchedRecordDeletion : NSObject <CKPropertiesDescription>

@property (readonly, copy, nonatomic) CKRecordID *recordID;
@property (readonly, copy, nonatomic) NSString *recordType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)CKDescribePropertiesUsing:(id)a0;
- (id)redactedDescription;
- (void).cxx_destruct;
- (BOOL)CKDescriptionShouldPrintPointer;
- (id)CKDescriptionClassName;
- (id)initWithRecordID:(id)a0 recordType:(id)a1;

@end
