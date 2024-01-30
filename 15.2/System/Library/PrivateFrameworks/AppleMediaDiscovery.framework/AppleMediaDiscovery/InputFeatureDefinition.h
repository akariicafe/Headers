@class NSArray, NSString, NSNumber;

@interface InputFeatureDefinition : NSObject

@property (retain, nonatomic) NSArray *featureValues;
@property (retain, nonatomic) NSString *featureId;
@property (retain, nonatomic) NSString *mapOp;
@property (retain, nonatomic) NSNumber *size;
@property (retain, nonatomic) NSString *remapDictionaryId;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)isValid;

@end
