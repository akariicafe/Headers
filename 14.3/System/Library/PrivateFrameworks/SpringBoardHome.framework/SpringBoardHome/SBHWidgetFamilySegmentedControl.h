@class NSArray, NSMutableArray, UIStackView;

@interface SBHWidgetFamilySegmentedControl : UIControl

@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) NSMutableArray *buttons;
@property (copy, nonatomic) NSArray *items;
@property (nonatomic) long long selectedSegmentIndex;

- (void)_updateContent;
- (id)initWithItems:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_buttonPressed:(id)a0;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)_updateSelectedStates;
- (id)_buttonForItem:(id)a0;

@end
