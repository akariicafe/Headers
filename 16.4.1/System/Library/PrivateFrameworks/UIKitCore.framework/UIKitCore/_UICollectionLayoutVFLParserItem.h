@class NSString;

@interface _UICollectionLayoutVFLParserItem : NSObject

@property (copy, nonatomic) NSString *name;
@property (nonatomic) double fraction;

- (id)description;
- (void).cxx_destruct;
- (double)_fractionForFractionTerm:(id)a0;
- (BOOL)_parseWithVisualFormat:(id)a0;
- (id)initWithName:(id)a0 fraction:(double)a1;
- (id)initWithVisualFormat:(id)a0;

@end
