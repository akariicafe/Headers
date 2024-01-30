@interface TSWPListLabelGeometry : NSObject

@property (nonatomic) double scale;
@property (nonatomic) double baselineOffset;
@property (nonatomic) BOOL scaleWithText;

+ (id)listLabelGeometry;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithScale:(double)a0 scaleWithText:(BOOL)a1 baselineOffset:(double)a2;

@end
