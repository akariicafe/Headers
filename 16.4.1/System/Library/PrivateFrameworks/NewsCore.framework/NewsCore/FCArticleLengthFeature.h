@class NSString;

@interface FCArticleLengthFeature : FCPersonalizationFeature

@property (retain, nonatomic) NSString *lengthID;

+ (id)longLengthFeature;
+ (id)shortLengthFeature;
+ (id)mediumLengthFeature;

- (double)featureWeightWithConfigurableValues:(id)a0 publisherID:(id)a1;
- (id)initWithPersonalizationIdentifier:(id)a0;
- (id)initWithLengthIdentifier:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
