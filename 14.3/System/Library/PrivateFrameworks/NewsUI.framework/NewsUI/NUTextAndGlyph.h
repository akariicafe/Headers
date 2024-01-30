@class NSString, NSAttributedString, UIImage;

@interface NUTextAndGlyph : NSObject

@property (readonly, nonatomic) NSAttributedString *attributedText;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) UIImage *glyph;
@property (nonatomic) unsigned long long alignment;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAttributedText:(id)a0 glyph:(id)a1;
- (id)initWithAttributedText:(id)a0 text:(id)a1 glyph:(id)a2;
- (id)initWithText:(id)a0 glyph:(id)a1;

@end
