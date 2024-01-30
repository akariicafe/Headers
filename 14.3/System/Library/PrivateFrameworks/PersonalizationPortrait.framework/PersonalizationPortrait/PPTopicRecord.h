@class PPTopic, PPSource, NSString, NSSet, PPTopicMetadata;

@interface PPTopicRecord : NSObject <PPRecord, NSCopying, NSMutableCopying, NSSecureCoding, MLFeatureProvider> {
    char _bucketizedSentimentScore;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PPTopic *topic;
@property (readonly, nonatomic) PPSource *source;
@property (readonly, nonatomic) unsigned long long algorithm;
@property (readonly, nonatomic) double initialScore;
@property (readonly, nonatomic) double decayRate;
@property (readonly, nonatomic) BOOL isLocal;
@property (readonly, nonatomic) NSString *extractionOsBuild;
@property (readonly, nonatomic) unsigned int extractionAssetVersion;
@property (readonly, nonatomic) double sentimentScore;
@property (readonly, nonatomic) PPTopicMetadata *metadata;
@property (readonly, nonatomic) NSSet *featureNames;

+ (id)describeAlgorithm:(unsigned long long)a0;
+ (id)algorithmForName:(id)a0;

- (id)featureValueForName:(id)a0;
- (double)sentimentScore;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToTopicRecord:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
