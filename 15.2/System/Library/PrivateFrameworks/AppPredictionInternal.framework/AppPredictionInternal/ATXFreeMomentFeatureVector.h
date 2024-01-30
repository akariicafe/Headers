@class NSMutableDictionary;

@interface ATXFreeMomentFeatureVector : NSObject {
    NSMutableDictionary *_featureVector;
}

- (id)valueForFeature:(int)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setValue:(id)a0 forFeature:(int)a1;
- (id)featureVectorDict;
- (id)initWithFeatureVectorDict:(id)a0;
- (void)setValue:(BOOL)a0 forBinaryFeature:(int)a1;
- (void)setDefaultBinaryValue:(BOOL)a0 ifBinaryFeatureNotInFeatureVector:(int)a1;
- (BOOL)boolValueForFeature:(int)a0;
- (void)setDefaultValue:(id)a0 ifFeatureNotInFeatureVector:(int)a1;

@end
