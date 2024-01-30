@class NSString, NSData, NSDate, CKRecord;
@protocol BCCloudDataPrivacyDelegate;

@interface BCCloudData : NSManagedObject <BCCloudData>

@property (copy, nonatomic) NSString *saltedHashedID;
@property (nonatomic) BOOL deletedFlag;
@property (copy, nonatomic) NSDate *modificationDate;
@property (nonatomic) long long editGeneration;
@property (nonatomic) long long syncGeneration;
@property (copy, nonatomic) CKRecord *systemFields;
@property (copy, nonatomic) NSData *ckSystemFields;
@property (weak, nonatomic) id<BCCloudDataPrivacyDelegate> privacyDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)localIdentifierFromRecord:(id)a0;
+ (id)propertyIDKey;

- (id)zoneName;
- (id)identifier;
- (id)mutableCopy;
- (void).cxx_destruct;
- (id)recordType;
- (void)configureFromCloudData:(id)a0 withMergers:(id)a1;
- (id)configuredRecordFromAttributes;
- (BOOL)hasValidSalt;
- (void)incrementEditGeneration;
- (BOOL)isEqualExceptForDate:(id)a0;
- (void)resolveConflictsFromRecord:(id)a0 withResolvers:(id)a1;
- (void)setSystemFields:(id)a0;
- (id)systemFields;

@end
