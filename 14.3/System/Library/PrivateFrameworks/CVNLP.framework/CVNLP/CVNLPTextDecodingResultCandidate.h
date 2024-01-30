@class NSArray, NSString;

@interface CVNLPTextDecodingResultCandidate : NSObject

@property (readonly, nonatomic) NSArray *tokens;
@property (readonly, copy, nonatomic) NSString *fullString;
@property double score;
@property double activationScore;

- (void).cxx_destruct;
- (id)initWithTokens:(id)a0 score:(double)a1 activationScore:(double)a2;

@end
