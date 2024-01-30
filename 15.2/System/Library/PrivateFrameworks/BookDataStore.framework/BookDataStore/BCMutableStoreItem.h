@class NSString, NSData, NSDate, CKRecord;
@protocol BCCloudDataPrivacyDelegate;

@interface BCMutableStoreItem : BCMutableCloudData <BCStoreItem, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *storeID;
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
- (void)encodeWithCoder:(id)a0;
- (id)zoneName;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithStoreID:(id)a0;
- (id)recordType;
- (id)initWithCloudData:(id)a0;
- (id)configuredRecordFromAttributes;

@end
