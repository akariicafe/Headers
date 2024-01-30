@class NSString, NSArray, NSOrderedSet, CKRecordID, NSData;

@interface WFCloudKitBaseOrdering : NSObject <WFCloudKitOrdering>

@property (class, readonly, nonatomic) NSString *recordBasename;

@property (readonly, nonatomic) NSArray *orderedWorkflowIDsArray;
@property (readonly, nonatomic) NSArray *orderedFolderIDsArray;
@property (readonly, nonatomic) NSString *collectionIdentifier;
@property (readonly, nonatomic) NSOrderedSet *orderedWorkflowIDs;
@property (readonly, nonatomic) NSOrderedSet *orderedFolderIDs;
@property (readonly, nonatomic) CKRecordID *identifier;
@property (copy, nonatomic) NSData *recordSystemFieldsData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)properties;
+ (id)recordType;
+ (id)collectionIdentifierForRecordID:(id)a0;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 orderedWorkflowIDs:(id)a1 orderedFolderIDs:(id)a2;

@end
