@class NSString;

@interface _UICollectionLayoutVFLParserItem : NSObject

@property (copy, nonatomic) NSString *name;
@property (nonatomic) double fraction;

- (id)description;
- (void).cxx_destruct;
- (BOOL)_parseWithVisualFormat:(id)a0;
- (double)_fractionForFractionTerm:(id)a0;
- (id)initWithVisualFormat:(id)a0;
- (id)initWithName:(id)a0 fraction:(double)a1;

@end
