@class NSString, SXJSONArray;

@interface SXFormattedText : SXJSONObject

@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSString *textStyle;
@property (readonly, nonatomic) SXJSONArray *inlineTextStyles;
@property (readonly, nonatomic) SXJSONArray *additions;
@property (nonatomic) BOOL shouldWrapText;

+ (id /* block */)valueClassBlockForPropertyWithName:(id)a0;

- (id)description;
- (id)initWithText:(id)a0;
- (id)textWithValue:(id)a0 withType:(int)a1;

@end
