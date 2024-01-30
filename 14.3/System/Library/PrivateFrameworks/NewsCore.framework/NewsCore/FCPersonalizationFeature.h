@class NSString;

@interface FCPersonalizationFeature : NSObject <NSCopying>

@property (retain, nonatomic) NSString *tagID;
@property (retain, nonatomic) NSString *personalizationIdentifier;
@property (nonatomic) BOOL shouldBeBoosted;
@property (readonly, nonatomic) NSString *fc_description;

+ (id)featureForFreeValuedIdentifier:(id)a0;
+ (id)featureForIdentifier:(id)a0 allowFreeValued:(BOOL)a1;
+ (id)featuresFromIssue:(id)a0;
+ (id)featuresFromHeadline:(id)a0 personalizationTreatment:(id)a1;
+ (id)featuresFromTodayPersonalizationEvent:(id)a0;
+ (id)featuresFromTag:(id)a0;
+ (id)featureForIdentifier:(id)a0;
+ (id)featureObserver;
+ (id)featuresFromTagIDs:(id)a0;
+ (id)featureFromTagID:(id)a0;
+ (id)featuresFromPersonalizingItem:(id)a0 personalizationTreatment:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)featureWeightWithConfigurableValues:(id)a0 publisherID:(id)a1;
- (id)fr_description;
- (id)initWithIdentifier:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
