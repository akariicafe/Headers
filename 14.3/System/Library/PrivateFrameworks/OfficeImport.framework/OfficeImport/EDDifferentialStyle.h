@class EDProtection, EDContentFormat, EDFill, EDAlignmentInfo, EDBorders, EDFont;

@interface EDDifferentialStyle : NSObject <NSCopying>

@property (retain, nonatomic) EDAlignmentInfo *alignmentInfo;
@property (retain, nonatomic) EDBorders *borders;
@property (retain, nonatomic) EDFill *fill;
@property (retain, nonatomic) EDFont *font;
@property (retain, nonatomic) EDProtection *protection;
@property (retain, nonatomic) EDContentFormat *contentFormat;

+ (id)differentialStyle;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;

@end
