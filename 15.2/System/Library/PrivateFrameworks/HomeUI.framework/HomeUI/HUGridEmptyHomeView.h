@class NSArray, HUColoredButton, HUChevronButton, UILabel, HUNewUserEducationWrapperView, NSString;
@protocol HUGridEmptyHomeViewDelegate;

@interface HUGridEmptyHomeView : UIView <HUNewUserEducationWrapperViewDelegate>

@property (retain, nonatomic) UILabel *instructionsLabel;
@property (retain, nonatomic) HUColoredButton *addAccessoryButton;
@property (retain, nonatomic) HUChevronButton *learnToAddAccessoryButton;
@property (retain, nonatomic) HUChevronButton *storeButton;
@property (retain, nonatomic) HUNewUserEducationWrapperView *userEducationView;
@property (retain, nonatomic) NSArray *constraints;
@property (readonly, nonatomic) BOOL canAddAccessories;
@property (weak, nonatomic) id<HUGridEmptyHomeViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)requiresConstraintBasedLayout;

- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (id)initWithCoder:(id)a0;
- (void)tintColorDidChange;
- (void)newUserEducationWrapperViewLearnMoreButtonPressed:(id)a0;
- (void)_setupCommonAppearance;
- (void)_addNewAccessory:(id)a0;
- (void)_openLearnToAddAccessories:(id)a0;
- (void)_openStore:(id)a0;

@end
