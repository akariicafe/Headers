@class TSWPParagraphStyle, TSTCellStyle;

@interface TSTLocalStylesKey : NSObject <NSCopying>

@property (retain, nonatomic) TSTCellStyle *cellStyle;
@property (retain, nonatomic) TSWPParagraphStyle *textStyle;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
