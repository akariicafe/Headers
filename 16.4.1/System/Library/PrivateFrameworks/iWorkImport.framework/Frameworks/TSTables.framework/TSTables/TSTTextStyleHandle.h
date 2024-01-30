@class TSWPParagraphStyle;

@interface TSTTextStyleHandle : NSObject <NSCopying>

@property (readonly, nonatomic) TSWPParagraphStyle *textStyle;
@property (readonly, nonatomic) BOOL isVariation;
@property (readonly, nonatomic) double fontSize;
@property (readonly, nonatomic) BOOL nonDefaultFontSize;
@property (readonly, nonatomic) BOOL nonDefaultFontName;
@property (readonly, nonatomic) int direction;

+ (id)handleForTextStyle:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithTextStyle:(id)a0;

@end
