@class NSArray;

@interface UPPLNerResponse : NSObject

@property (readonly, nonatomic) NSArray *alternativePredictions;

- (id)spans;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithAlternativePredictions:(id)a0;

@end
