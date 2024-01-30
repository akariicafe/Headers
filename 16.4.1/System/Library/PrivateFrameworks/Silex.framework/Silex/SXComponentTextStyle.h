@class SXTextShadow, NSString, SXTextDecoration, SXJSONArray, SXDropCapStyle, SXTextStroke, SXTextStyle, UIColor;
@protocol SXTextStyleFontAttributes;

@interface SXComponentTextStyle : SXTextStyle <SXComponentTextStyle>

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long fontSize;
@property (readonly, nonatomic) UIColor *textColor;
@property (readonly, nonatomic) SXTextShadow *textShadow;
@property (readonly, nonatomic) long long textTransform;
@property (readonly, nonatomic) double tracking;
@property (readonly, nonatomic) SXTextDecoration *underline;
@property (readonly, nonatomic) SXTextDecoration *strikethrough;
@property (readonly, nonatomic) SXJSONArray *listStyle;
@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) int verticalAlignment;
@property (readonly, nonatomic) SXTextStroke *stroke;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *fontName;
@property (readonly, nonatomic) id<SXTextStyleFontAttributes> fontAttributes;
@property (readonly, nonatomic) long long textAlignment;
@property (readonly, nonatomic) long long lineHeight;
@property (readonly, nonatomic) double relativeLineHeight;
@property (readonly, nonatomic) long long exactLineHeight;
@property (readonly, nonatomic) SXDropCapStyle *dropCapStyle;
@property (readonly, nonatomic) long long hyphenation;
@property (readonly, nonatomic) SXTextStyle *linkStyle;
@property (readonly, nonatomic) long long paragraphSpacingBefore;
@property (readonly, nonatomic) long long paragraphSpacingAfter;
@property (readonly, nonatomic) long long firstLineIndent;
@property (readonly, nonatomic) BOOL hangingPunctuation;
@property (readonly, nonatomic) BOOL fontScaling;
@property (readonly, nonatomic) BOOL lineBalancing;

+ (id /* block */)valueClassBlockForPropertyWithName:(id)a0;

- (long long)exactLineHeightWithValue:(id)a0 withType:(int)a1;
- (BOOL)fontScalingWithValue:(id)a0 withType:(int)a1;
- (long long)hyphenationWithValue:(id)a0 withType:(int)a1;
- (long long)lineHeightWithValue:(id)a0 withType:(int)a1;
- (double)relativeLineHeightWithValue:(id)a0 withType:(int)a1;
- (long long)textAlignmentWithValue:(id)a0 withType:(int)a1;

@end
