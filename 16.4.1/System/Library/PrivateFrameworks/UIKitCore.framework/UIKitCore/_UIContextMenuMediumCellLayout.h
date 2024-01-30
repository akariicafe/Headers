@class NSArray, NSString, _UIContextMenuCellContentView, NSLayoutConstraint;

@interface _UIContextMenuMediumCellLayout : NSObject <_UIContextMenuCellLayout>

@property (weak, nonatomic) _UIContextMenuCellContentView *contentView;
@property (retain, nonatomic) NSArray *managedConstraints;
@property (retain, nonatomic) NSLayoutConstraint *topConstraint;
@property (retain, nonatomic) NSLayoutConstraint *primaryViewCenterYConstraint;
@property (retain, nonatomic) NSLayoutConstraint *bottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *fittingBottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *minimumHeightConstraint;
@property (readonly, nonatomic) long long layoutSize;
@property (readonly, nonatomic) long long labelTextAlignment;
@property (readonly, nonatomic) unsigned long long labelMaximumNumberOfLines;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContentView:(id)a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (BOOL)_hasTitle;
- (void)installConstraints;
- (id)preferredTextStyleUsingBoldFont:(BOOL)a0;
- (void)removeConstraints;

@end
