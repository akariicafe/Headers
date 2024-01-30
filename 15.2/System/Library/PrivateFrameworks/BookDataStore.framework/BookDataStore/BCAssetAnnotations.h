@class NSString, NSData, NSDate, CKRecord;
@protocol BCCloudDataPrivacyDelegate;

@interface BCAssetAnnotations : BCCloudData <BCAssetAnnotations>

@property (copy, nonatomic) NSString *assetID;
@property (copy, nonatomic) NSString *assetVersion;
@property (retain, nonatomic) NSData *bookAnnotations;
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

+ (id)propertyIDKey;

- (id)identifier;
- (id)mutableCopy;
- (id)zoneName;
- (id)recordType;
- (BOOL)isEqualExceptForDate:(id)a0;
- (void)configureFromCloudData:(id)a0 withMergers:(id)a1;
- (void)resolveConflictsFromRecord:(id)a0 withResolvers:(id)a1;
- (void)_configureFromAssetAnnotations:(id)a0 withMergers:(id)a1;
- (void)_mergeInAssetID:(id)a0 assetVersion:(id)a1 serializedData:(id)a2;

@end
