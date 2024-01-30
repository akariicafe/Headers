@class NSString;

@interface FCArticleLengthFeature : FCPersonalizationFeature

@property (retain, nonatomic) NSString *lengthID;

+ (id)shortLengthFeature;
+ (id)mediumLengthFeature;
+ (id)longLengthFeature;

- (void).cxx_destruct;
- (id)init;
- (id)initWithPersonalizationIdentifier:(id)a0;
- (id)initWithLengthIdentifier:(id)a0;
- (double)featureWeightWithConfigurableValues:(id)a0 publisherID:(id)a1;

@end
