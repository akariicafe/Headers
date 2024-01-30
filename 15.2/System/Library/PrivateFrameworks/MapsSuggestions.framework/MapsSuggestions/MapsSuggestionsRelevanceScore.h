@class NSDate;

@interface MapsSuggestionsRelevanceScore : NSObject

@property (nonatomic) double confidence;
@property (retain, nonatomic) NSDate *lastInteractionTime;

- (id)initWithConfidence:(double)a0;
- (void).cxx_destruct;

@end
