@class IFColor, NSString;

@interface ISTextLayer : ISLayer

@property (retain, nonatomic) IFColor *color;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *fontName;
@property (nonatomic) double fontSize;

- (id)init;
- (void).cxx_destruct;

@end
