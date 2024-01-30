@class NSString, NSData, NSDate, CKRecord;
@protocol BCCloudDataPrivacyDelegate;

@interface BCMutableAssetAnnotations : BCMutableCloudData <BCAssetAnnotations>

@property (copy, nonatomic) NSString *assetVersion;
@property (retain, nonatomic) NSData *bookAnnotations;
@property (readonly, copy, nonatomic) NSString *assetID;
@property (readonly, nonatomic) BOOL deletedFlag;
@property (readonly, copy, nonatomic) NSDate *modificationDate;
@property (readonly, nonatomic) long long editGeneration;
@property (readonly, nonatomic) long long syncGeneration;
@property (readonly, copy, nonatomic) CKRecord *systemFields;
@property (readonly, copy, nonatomic) NSData *ckSystemFields;
@property (weak, nonatomic) id<BCCloudDataPrivacyDelegate> privacyDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRecord:(id)a0;
- (id)identifier;
- (id)zoneName;
- (void).cxx_destruct;
- (id)recordType;
- (id)initWithCloudData:(id)a0;
- (id)configuredRecordFromAttributes;
- (id)initWithAssetID:(id)a0;

@end
