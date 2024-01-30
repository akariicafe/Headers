@class NSString, NSArray, NSDictionary;

@interface SLODLDProcessorResult : NSObject

@property (readonly, nonatomic) float odldScore;
@property (readonly, nonatomic) NSString *configVersion;
@property (readonly, nonatomic) NSArray *tokens;
@property (readonly, nonatomic) NSDictionary *features;

- (void).cxx_destruct;
- (id)initWithScore:(float)a0 withVersion:(id)a1 tokens:(id)a2 features:(id)a3;

@end
