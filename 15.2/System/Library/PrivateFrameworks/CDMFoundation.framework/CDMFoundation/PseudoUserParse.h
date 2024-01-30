@class SIRINLUUserParse;

@interface PseudoUserParse : NSObject

@property (readonly) SIRINLUUserParse *userParse;
@property (readonly) float score;

- (void).cxx_destruct;
- (id)initWithParse:(id)a0 score:(float)a1;

@end
