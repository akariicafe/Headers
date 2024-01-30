@class UIColor, NSString;
@protocol SXTextStyleFontAttributes;

@interface SXDropCapStyle : SXJSONObject <SXTextStyleFontDescribing>

@property (readonly, nonatomic) long long numberOfLines;
@property (readonly, nonatomic) long long numberOfRaisedLines;
@property (readonly, nonatomic) long long numberOfCharacters;
@property (readonly, nonatomic) UIColor *textColor;
@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) long long padding;
@property (readonly, nonatomic) NSString *fontName;
@property (readonly, nonatomic) id<SXTextStyleFontAttributes> fontAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)classForProtocolProperty:(id)a0 withValue:(id)a1;


@end
