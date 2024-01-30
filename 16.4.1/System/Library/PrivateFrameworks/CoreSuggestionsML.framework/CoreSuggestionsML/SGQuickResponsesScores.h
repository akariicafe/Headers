@class NSArray;

@interface SGQuickResponsesScores : NSObject

@property (readonly, nonatomic) NSArray *modelScores;
@property (readonly, nonatomic) NSArray *normalizedModelScores;

+ (id)quickResponsesScoresWithModelScores:(id)a0 normalizedModelScores:(id)a1;

- (void).cxx_destruct;
- (id)initWithModelScores:(id)a0 normalizedModelScores:(id)a1;

@end
