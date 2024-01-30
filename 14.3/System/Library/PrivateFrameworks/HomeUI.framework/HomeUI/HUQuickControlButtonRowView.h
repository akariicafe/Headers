@class NSArray, NSString, UIScrollView, NSMutableArray;

@interface HUQuickControlButtonRowView : UIView <HUQuickControlAuxiliaryView>

@property (retain, nonatomic) NSMutableArray *mutableButtonViews;
@property (retain, nonatomic) NSArray *buttonConstraints;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (nonatomic) long long preferredContentAlignment;
@property (readonly, copy, nonatomic) NSArray *buttonViews;
@property (readonly, nonatomic) BOOL hasCenteredContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)requiresConstraintBasedLayout;

- (void)contentDidChange;
- (void)_contentSizeCategoryDidChange;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_clearButtonConstraints;
- (void)addButtonView:(id)a0;
- (void)insertButtonView:(id)a0 atIndex:(unsigned long long)a1;
- (void)_updateLayoutIfNecessary;
- (id)initWithButtonViews:(id)a0;
- (void)removeButtonView:(id)a0;

@end
