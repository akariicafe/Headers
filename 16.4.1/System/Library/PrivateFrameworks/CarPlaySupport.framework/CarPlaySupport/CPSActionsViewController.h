@class UIStackView, NSArray, UIFocusGuide, NSString;
@protocol CPEntityActionsProviding, CPSActionButtonLayoutDelegate, CPSEntityContentViewControllerDelegate;

@interface CPSActionsViewController : UIViewController <CPSButtonDelegate, CPSActionButtonLayoutDelegate, CPSEntityUpdateSupporting> {
    struct { unsigned char buttonSize : 1; unsigned char buttonGlyphSize : 1; unsigned char font : 1; unsigned char buttonBackgroundColor : 1; unsigned char buttonRadius : 1; unsigned char buttonsShouldFill : 1; unsigned char configureButton : 1; } _layoutflags;
}

@property (retain, nonatomic) id<CPEntityActionsProviding> entity;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UIFocusGuide *focusGuide;
@property (retain, nonatomic) NSArray *layoutConstraints;
@property (weak, nonatomic) id<CPSActionButtonLayoutDelegate> layoutDelegate;
@property (weak, nonatomic) id<CPSEntityContentViewControllerDelegate> eventDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })buttonSize;
- (void)updateViewConstraints;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)resetLayoutConstraints;
- (void)setupLayoutConstraints;
- (void)setupViews;
- (void)updateViews;
- (void)didSelectButton:(id)a0;
- (struct CGSize { double x0; double x1; })buttonGlyphSize;
- (double)buttonRadius;
- (id)initWithEntity:(id)a0 layoutDelete:(id)a1;
- (void)updateWithEntity:(id)a0;

@end
