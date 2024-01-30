@class NSString;

@interface UIKBTextStyle : NSObject <NSCopying>

@property (retain, nonatomic) NSString *fontName;
@property (nonatomic) double fontSize;
@property (nonatomic) double imageScale;
@property (nonatomic) double minFontSize;
@property (nonatomic) double kerning;
@property (nonatomic) double textOpacity;
@property (retain, nonatomic) NSString *textColor;
@property (retain, nonatomic) NSString *etchColor;
@property (nonatomic) long long alignment;
@property (nonatomic) struct CGPoint { double x; double y; } textOffset;
@property (nonatomic) struct CGPoint { double x; double y; } etchOffset;
@property (nonatomic) double pathWeight;
@property (nonatomic) double fontWeight;
@property (nonatomic) unsigned long long anchorCorner;
@property (nonatomic) long long selector;
@property (nonatomic) BOOL ignoreTextMarginOnKey;
@property (nonatomic) BOOL usesSymbolImage;

+ (id)styleWithFontName:(id)a0 withFontSize:(double)a1;
+ (id)styleWithTextColor:(id)a0;

- (id)description;
- (void)overlayWithStyle:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
