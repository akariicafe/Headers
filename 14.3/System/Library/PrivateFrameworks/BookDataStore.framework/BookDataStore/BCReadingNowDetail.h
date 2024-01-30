@class NSString, NSData, NSDate, CKRecord;
@protocol BCCloudDataPrivacyDelegate;

@interface BCReadingNowDetail : BCCloudData <BCReadingNowDetail>

@property (copy, nonatomic) NSString *assetID;
@property (nonatomic) BOOL isTrackedAsRecent;
@property (copy, nonatomic) NSDate *lastEngagedDate;
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

- (id)zoneName;
- (id)mutableCopy;
- (id)recordType;
- (id)identifier;
- (BOOL)isEqualExceptForDate:(id)a0;
- (void)configureFromCloudData:(id)a0 withMergers:(id)a1;
- (void)resolveConflictsFromRecord:(id)a0 withResolvers:(id)a1;
- (void)_configureFromReadingNowDetail:(id)a0 withMergers:(id)a1;

@end
