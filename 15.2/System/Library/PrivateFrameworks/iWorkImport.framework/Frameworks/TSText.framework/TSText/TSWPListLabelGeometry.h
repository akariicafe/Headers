@interface TSWPListLabelGeometry : NSObject

@property (nonatomic) double scale;
@property (nonatomic) double baselineOffset;
@property (nonatomic) BOOL scaleWithText;

+ (id)listLabelGeometry;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithScale:(double)a0 scaleWithText:(BOOL)a1 baselineOffset:(double)a2;

@end
