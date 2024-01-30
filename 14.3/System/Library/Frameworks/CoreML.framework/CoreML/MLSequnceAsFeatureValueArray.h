@class MLSequence;

@interface MLSequnceAsFeatureValueArray : NSArray

@property (readonly, nonatomic) MLSequence *sequence;

- (void).cxx_destruct;
- (id)initWrappingSequence:(id)a0;
- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)a0;

@end
