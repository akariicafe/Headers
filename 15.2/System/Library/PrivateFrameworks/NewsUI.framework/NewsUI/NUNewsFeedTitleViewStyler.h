@class UIColor, NSString;

@interface NUNewsFeedTitleViewStyler : NSObject <NUTitleViewStyler>

@property (copy, nonatomic) UIColor *textColor;
@property (readonly, nonatomic) long long textAlignment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id)styleTitleText:(id)a0 styleType:(unsigned long long)a1 boundingSize:(struct CGSize { double x0; double x1; })a2;
- (id)initWithTextAlignment:(long long)a0;
- (id)styleTextAsMessage:(id)a0 boundingSize:(struct CGSize { double x0; double x1; })a1;
- (id)styleTextAsTitle:(id)a0 boundingSize:(struct CGSize { double x0; double x1; })a1;
- (id)messageLargeFont;
- (id)messageSmallFont;
- (id)titleParagraphStyleWithWrapping:(BOOL)a0;
- (id)titleExtraLargeFont;
- (void)updateWithTextColor:(id)a0;

@end
