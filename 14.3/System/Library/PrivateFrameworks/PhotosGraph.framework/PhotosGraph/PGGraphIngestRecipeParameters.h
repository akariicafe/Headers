@class NSArray;

@interface PGGraphIngestRecipeParameters : NSObject

@property (retain, nonatomic) NSArray *momentsToIngest;
@property (retain, nonatomic) NSArray *highligthsToIngest;
@property (retain, nonatomic) NSArray *preProcessors;
@property (retain, nonatomic) NSArray *postProcessors;

+ (id)lighweightGraphIngestParameters;

- (void).cxx_destruct;

@end
