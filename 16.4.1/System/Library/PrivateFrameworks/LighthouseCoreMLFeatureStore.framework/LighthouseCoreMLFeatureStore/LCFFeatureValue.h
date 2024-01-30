@class NSString, NSNumber, NSArray;

@interface LCFFeatureValue : NSObject

@property (readonly, nonatomic) NSString *typeDb;
@property (readonly, nonatomic) NSString *valueInString;
@property (readonly, nonatomic) NSNumber *intValue;
@property (readonly, nonatomic) NSNumber *doubleValue;
@property (readonly, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) NSNumber *boolValue;
@property (readonly, nonatomic) NSNumber *timeBucketValue;
@property (readonly, nonatomic) NSArray *shape;
@property (readonly, nonatomic) NSArray *stride;
@property (readonly, nonatomic) NSArray *valuesFlatten;

- (id)initEmpty;
- (void).cxx_destruct;
- (id)initWithBoolValue:(id)a0;
- (id)initWithStringValue:(id)a0;
- (id)initWithDoubleValue:(id)a0;
- (id)initWithIntValue:(id)a0;
- (id)initWithMultiArray:(id)a0 stride:(id)a1 valuesFlatten:(id)a2;
- (id)initWithTimeBucketValue:(id)a0;

@end
