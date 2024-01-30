@class NSDictionary;

@interface FCNewsPersonalizationTrainingBiases : NSObject

@property (retain, nonatomic) NSDictionary *biases;

+ (id)identifiersForEventType:(id)a0 feedType:(id)a1 groupType:(id)a2;

- (double)biasForEventType:(id)a0 feedType:(id)a1 groupType:(id)a2;
- (id)initWithBiases:(id)a0;
- (void).cxx_destruct;

@end
