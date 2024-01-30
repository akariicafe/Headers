@class NSString, NSNumber, NSDictionary;

@interface SBSFeatureFlag : NSObject

@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *feature;
@property (copy, nonatomic) NSNumber *value;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

- (id)initWithDictionaryRepresentation:(id)a0;
- (void).cxx_destruct;
- (id)initWith:(id)a0 andFeature:(id)a1 andValue:(id)a2;

@end
