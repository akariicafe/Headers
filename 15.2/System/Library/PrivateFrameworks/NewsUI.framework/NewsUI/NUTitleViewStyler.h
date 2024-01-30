@class UIColor, NSString;

@interface NUTitleViewStyler : NSObject <NUTitleViewStyler>

@property (readonly, nonatomic) UIColor *textColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id)initWithTextColor:(id)a0;
- (id)styleTitleText:(id)a0 styleType:(unsigned long long)a1 boundingSize:(struct CGSize { double x0; double x1; })a2;
- (id)styleTextAsMessage:(id)a0 boundingSize:(struct CGSize { double x0; double x1; })a1;
- (id)styleTextAsTitle:(id)a0 boundingSize:(struct CGSize { double x0; double x1; })a1;
- (id)messageLargeFont;
- (id)messageSmallFont;
- (id)titleParagraphStyleWithWrapping:(BOOL)a0;
- (id)messageParagraphStyle;
- (id)titleLargeFont;
- (id)titleSmallFont;

@end
