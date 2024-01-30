@class NSSet, NSString, NSDate;

@interface PPTopicQuery : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL scoreWithCalibration;
@property (nonatomic) unsigned long long minimumComponentCount;
@property (retain, nonatomic) NSSet *matchingAlgorithms;
@property (retain, nonatomic) NSSet *excludingAlgorithms;
@property (retain, nonatomic) NSString *matchingTopicTrie;
@property (nonatomic) BOOL orderByIdentifier;
@property (nonatomic) BOOL removeNearDuplicates;
@property (nonatomic) unsigned long long limit;
@property (retain, nonatomic) NSDate *fromDate;
@property (retain, nonatomic) NSDate *toDate;
@property (retain, nonatomic) NSDate *scoringDate;
@property (retain, nonatomic) NSSet *matchingSourceBundleIds;
@property (retain, nonatomic) NSSet *excludingSourceBundleIds;
@property (retain, nonatomic) NSSet *matchingGroupIds;
@property (retain, nonatomic) NSSet *matchingDocumentIds;
@property (nonatomic) unsigned long long deviceFilter;
@property (nonatomic) BOOL overrideDecayRate;
@property (nonatomic) double decayRate;
@property (nonatomic) BOOL scoreWithBiases;
@property (retain, nonatomic) NSSet *matchingTopicIds;
@property (nonatomic) BOOL scoreWithStrictFiltering;
@property (nonatomic) BOOL excludeWithoutSentiment;
@property (retain, nonatomic) NSString *matchingContactHandle;

+ (id)queryForCSSearchableItem:(id)a0;
+ (id)_algorithmsDescription:(id)a0;

- (id)customizedDescription;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqualToTopicQuery:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
