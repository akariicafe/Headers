@class NSString, NSDictionary, NSDate, NSNumber;

@interface LCFFeatureSet : NSObject

@property (readonly, nonatomic) NSString *itemIdentifier;
@property (readonly, nonatomic) NSNumber *featureVersion;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) NSDictionary *featureValues;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 featureVersion:(id)a1 timestamp:(id)a2 featureValues:(id)a3;

@end
