@class NSDictionary, NSSet;

@interface EDPromotionMLModelInput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) NSDictionary *header_key_filtered;
@property (nonatomic) double to_count;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;
- (id)initWithHeader_key_filtered:(id)a0 to_count:(double)a1;

@end
