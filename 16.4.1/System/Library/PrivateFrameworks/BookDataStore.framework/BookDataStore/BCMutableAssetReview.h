@class NSString, NSData, NSDate, CKRecord;
@protocol BCCloudDataPrivacyDelegate;

@interface BCMutableAssetReview : BCMutableCloudData <BCAssetReview, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *assetReviewID;
@property (copy, nonatomic) NSString *userID;
@property (nonatomic) short starRating;
@property (nonatomic) double normalizedStarRating;
@property (copy, nonatomic) NSString *reviewTitle;
@property (copy, nonatomic) NSString *reviewBody;
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

- (id)zoneName;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRecord:(id)a0;
- (id)identifier;
- (void).cxx_destruct;
- (id)recordType;
- (id)configuredRecordFromAttributes;
- (id)initWithAssetReviewID:(id)a0;
- (id)initWithCloudData:(id)a0;

@end
