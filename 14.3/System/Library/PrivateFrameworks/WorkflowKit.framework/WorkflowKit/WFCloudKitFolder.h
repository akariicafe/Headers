@class NSString, CKRecordID, NSData;

@interface WFCloudKitFolder : NSObject <WFCloudKitItem>

@property (copy, nonatomic) NSString *name;
@property (nonatomic) unsigned short icon;
@property (readonly, nonatomic) CKRecordID *identifier;
@property (copy, nonatomic) NSData *recordSystemFieldsData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)properties;
+ (id)recordType;
+ (BOOL)isFolderRecordID:(id)a0;
+ (id)recordIDWithZoneID:(id)a0 collectionIdentifier:(id)a1;
+ (id)collectionIdentifierForRecordID:(id)a0;

- (void).cxx_destruct;
- (id)initWithCollection:(id)a0 identifier:(id)a1;

@end
