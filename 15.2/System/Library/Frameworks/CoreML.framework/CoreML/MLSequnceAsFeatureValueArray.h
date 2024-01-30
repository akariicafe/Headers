@class MLSequence;

@interface MLSequnceAsFeatureValueArray : NSArray

@property (readonly, nonatomic) MLSequence *sequence;

- (id)objectAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id)initWrappingSequence:(id)a0;

@end
