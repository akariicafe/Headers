@class NSString;

@interface SNModelFeatureConnection : NSObject

@property (readonly) NSString *sourceFeatureName;
@property (readonly) NSString *destinationFeatureName;

- (void).cxx_destruct;
- (id)initWithSourceFeatureName:(id)a0 destinationFeatureName:(id)a1;

@end
