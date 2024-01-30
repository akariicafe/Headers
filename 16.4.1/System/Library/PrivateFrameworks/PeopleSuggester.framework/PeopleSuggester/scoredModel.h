@class NSString;

@interface scoredModel : NSObject

@property double score;
@property (retain, nonatomic) NSString *modelKey;

- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (id)initWithModelKey:(id)a0 score:(double)a1;

@end
