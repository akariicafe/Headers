@class NSArray;

@interface PGGraphIngestRecipeParameters : NSObject

@property (retain, nonatomic) NSArray *momentsToIngest;
@property (retain, nonatomic) NSArray *highlightsToIngest;
@property (retain, nonatomic) NSArray *preProcessors;
@property (retain, nonatomic) NSArray *postProcessors;

+ (id)lightweightGraphIngestParameters;

- (void).cxx_destruct;

@end
