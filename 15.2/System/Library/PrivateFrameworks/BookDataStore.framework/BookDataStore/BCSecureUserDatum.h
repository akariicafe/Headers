@class NSString, NSData, NSDate, CKRecord;
@protocol BCCloudDataPrivacyDelegate;

@interface BCSecureUserDatum : BCCloudData <BCSecureUserDatum>

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *value;
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
- (void)_configureFromUserDatum:(id)a0 withMergers:(id)a1;

@end
