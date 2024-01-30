@class _CDInteraction;

@interface _PSSharingContactRankerScoredContact : NSObject

@property (nonatomic) double score;
@property (retain, nonatomic) _CDInteraction *interaction;

- (void).cxx_destruct;
- (id)initWithScore:(double)a0 interaction:(id)a1;

@end
