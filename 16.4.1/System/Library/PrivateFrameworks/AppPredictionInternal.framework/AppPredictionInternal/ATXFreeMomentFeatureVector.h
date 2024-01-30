@class NSMutableDictionary;

@interface ATXFreeMomentFeatureVector : NSObject {
    NSMutableDictionary *_featureVector;
}

- (id)valueForFeature:(int)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)boolValueForFeature:(int)a0;
- (id)featureVectorDict;
- (id)initWithFeatureVectorDict:(id)a0;
- (void)setDefaultBinaryValue:(BOOL)a0 ifBinaryFeatureNotInFeatureVector:(int)a1;
- (void)setDefaultValue:(id)a0 ifFeatureNotInFeatureVector:(int)a1;
- (void)setValue:(BOOL)a0 forBinaryFeature:(int)a1;
- (void)setValue:(id)a0 forFeature:(int)a1;

@end
