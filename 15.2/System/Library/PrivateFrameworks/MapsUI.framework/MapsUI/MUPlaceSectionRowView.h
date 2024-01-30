@class NSString;

@interface MUPlaceSectionRowView : MKViewWithHairline <MUSelectable>

@property (nonatomic) BOOL handlesHighlighting;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)rowViewWithContentView:(id)a0;

- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)_updateBackgroundColor:(BOOL)a0;

@end
