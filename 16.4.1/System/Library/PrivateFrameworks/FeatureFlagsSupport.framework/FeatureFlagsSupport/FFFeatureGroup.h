@class NSString, NSDictionary;

@interface FFFeatureGroup : NSObject

@property (readonly, nonatomic) NSString *name;
@property (retain, nonatomic) NSDictionary *featureSets;
@property (retain, nonatomic) NSString *disclosure;
@property (retain, nonatomic) NSDictionary *attributes;

- (id)initWithName:(id)a0;
- (void).cxx_destruct;

@end
