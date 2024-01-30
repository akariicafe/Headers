@interface IPFeatureExtractor : NSObject

+ (id)defaultExtractor;

- (id)queue;
- (id)featuresForTextString:(id)a0 inMessageUnit:(id)a1 context:(id)a2;

@end
