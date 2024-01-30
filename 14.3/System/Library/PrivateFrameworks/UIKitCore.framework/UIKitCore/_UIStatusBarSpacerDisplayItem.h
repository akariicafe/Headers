@class UILayoutGuide, NSArray;

@interface _UIStatusBarSpacerDisplayItem : _UIStatusBarDisplayItem

@property (retain, nonatomic) UILayoutGuide *layoutGuide;
@property (retain, nonatomic) NSArray *constraints;
@property (nonatomic) struct CGSize { double width; double height; } size;

- (void)setContainerView:(id)a0;
- (void).cxx_destruct;
- (void)_applyConstraintsIfNeeded;
- (id)initWithIdentifier:(id)a0 item:(id)a1;
- (void)applyUpdate:(id)a0;

@end
