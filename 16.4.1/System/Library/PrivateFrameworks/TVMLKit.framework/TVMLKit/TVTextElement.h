@class NSAttributedString;

@interface TVTextElement : TVViewElement

@property (readonly, nonatomic) NSAttributedString *attributedText;
@property (readonly, nonatomic) long long textStyle;

- (id)attributedStringWithFont:(id)a0;
- (id)attributedStringWithFont:(id)a0 foregroundColor:(id)a1 textAlignment:(long long)a2;

@end
