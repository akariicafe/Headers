@class AMDFeatureProvider, NSString, NSArray, NSNumber;

@interface InputFeatureDefinition : NSObject

@property (retain, nonatomic) NSString *columnName;
@property (retain, nonatomic) NSArray *featureValues;
@property (retain, nonatomic) NSString *featureId;
@property (retain, nonatomic) NSString *featureType;
@property (retain, nonatomic) NSString *mapOp;
@property (retain, nonatomic) NSNumber *size;
@property (retain, nonatomic) NSArray *shape;
@property (retain, nonatomic) NSString *remapDictionaryId;
@property (retain, nonatomic) AMDFeatureProvider *featureProvider;

- (BOOL)isValid;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
