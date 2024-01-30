@class NSString;

@interface CUITextStyle : CUINamedLookup

@property (readonly, nonatomic) NSString *fontName;
@property (readonly, nonatomic) double fontSize;
@property (readonly, nonatomic) double maxPointSize;
@property (readonly, nonatomic) double minPointSize;
@property (readonly, nonatomic) long long scalingStyle;
@property (readonly, nonatomic) long long alignment;

- (id)initWithName:(id)a0 usingRenditionKey:(id)a1 fromTheme:(unsigned long long)a2;
- (void)dealloc;

@end
