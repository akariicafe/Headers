@class PPSourceMetadata, NSString, NSArray, NSDate, NSSet;

@interface PPSource : NSObject <NSCopying, NSSecureCoding, MLFeatureProvider>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PPSourceMetadata *metadata;
@property (readonly, nonatomic) NSDate *relevanceDate;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) NSArray *contactHandles;
@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) NSString *groupId;
@property (readonly, nonatomic) NSString *documentId;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSSet *featureNames;

- (BOOL)isEqualToSource:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)featureValueForName:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithBundleId:(id)a0 groupId:(id)a1 documentId:(id)a2 date:(id)a3;
- (id)initWithBundleId:(id)a0 groupId:(id)a1 documentId:(id)a2 date:(id)a3 relevanceDate:(id)a4 contactHandles:(id)a5 language:(id)a6 metadata:(id)a7;
- (id)description;
- (void).cxx_destruct;
- (id)sha256;

@end
