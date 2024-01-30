@class WFWorkflowRecord, NSString, CKRecordID, NSData, NSDate, WFFileRepresentation;

@interface WFCloudKitWorkflow : NSObject <WFCloudKitItem>

@property (retain, nonatomic) WFWorkflowRecord *cachedRecord;
@property (readonly, nonatomic) NSDate *createdAt;
@property (readonly, nonatomic) NSDate *modifiedAt;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *workflowSubtitle;
@property (copy, nonatomic) NSString *associatedAppBundleIdentifier;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *galleryIdentifier;
@property (retain, nonatomic) WFFileRepresentation *serializedDataFile;
@property (nonatomic) long long cachedSyncHash;
@property (copy, nonatomic) NSData *serializedQuarantineData;
@property (copy, nonatomic) NSData *serializedAccessResourcePerWorkflowStateData;
@property (copy, nonatomic) NSString *lastSavedOnDeviceName;
@property (readonly, nonatomic) CKRecordID *identifier;
@property (copy, nonatomic) NSData *recordSystemFieldsData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)properties;
+ (id)recordType;
+ (id)recordIDWithZoneID:(id)a0 workflowID:(id)a1;

- (void).cxx_destruct;
- (id)recordRepresentationWithError:(id *)a0;
- (BOOL)isValidForSyncing;
- (id)initWithRecord:(id)a0 identifier:(id)a1;
- (void)setCreatedAt:(id)a0 modifiedAt:(id)a1 createdBy:(id)a2;

@end
