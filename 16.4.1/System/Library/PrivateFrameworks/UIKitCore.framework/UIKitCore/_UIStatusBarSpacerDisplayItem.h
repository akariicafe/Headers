@class UILayoutGuide, NSArray;

@interface _UIStatusBarSpacerDisplayItem : _UIStatusBarDisplayItem

@property (retain, nonatomic) UILayoutGuide *layoutGuide;
@property (retain, nonatomic) NSArray *constraints;
@property (nonatomic) struct CGSize { double width; double height; } size;

- (void)applyUpdate:(id)a0;
- (id)initWithIdentifier:(id)a0 item:(id)a1;
- (void)_applyConstraintsIfNeeded;
- (void)setContainerView:(id)a0;
- (void).cxx_destruct;

@end
