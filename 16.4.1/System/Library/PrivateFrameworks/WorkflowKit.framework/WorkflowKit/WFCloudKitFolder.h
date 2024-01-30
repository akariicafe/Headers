@class NSString, CKRecordID, NSData;

@interface WFCloudKitFolder : NSObject <WFCloudKitItem, WFCloudKitWalrusSupporting>

@property (class, readonly, nonatomic) long long latestEncryptedSchemaVersion;

@property (copy, nonatomic) NSString *name;
@property (nonatomic) unsigned short icon;
@property (nonatomic) long long encryptedSchemaVersion;
@property (readonly, nonatomic) CKRecordID *identifier;
@property (copy, nonatomic) NSData *recordSystemFieldsData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)properties;
+ (id)recordType;
+ (id)collectionIdentifierForRecordID:(id)a0;
+ (BOOL)isFolderRecordID:(id)a0;
+ (id)recordIDWithZoneID:(id)a0 collectionIdentifier:(id)a1;
+ (id)encryptedNameProperty;
+ (id)nameProperty;

- (void).cxx_destruct;
- (id)initWithCollectionRecord:(id)a0 identifier:(id)a1;

@end
