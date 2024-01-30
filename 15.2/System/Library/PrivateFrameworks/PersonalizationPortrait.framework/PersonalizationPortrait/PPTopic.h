@class NSString, PPTopicRecord, NSSet;

@interface PPTopic : NSObject <NSCopying, NSSecureCoding, MLFeatureProvider>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *clusterIdentifier;
@property (readonly, nonatomic) NSString *topicIdentifier;
@property (readonly, nonatomic) PPTopicRecord *mostRelevantRecord;
@property (readonly, nonatomic) double sentimentScore;
@property (readonly, nonatomic) NSSet *featureNames;

+ (id)clusterIdentifierFromTopicId:(id)a0;

- (id)initWithId:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)featureValueForName:(id)a0;
- (id)id;
- (id)initWithTopicIdentifier:(id)a0 mostRelevantRecord:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToTopic:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithTopicIdentifier:(id)a0;

@end
