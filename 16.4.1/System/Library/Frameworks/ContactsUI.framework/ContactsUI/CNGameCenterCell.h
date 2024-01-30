@class NSString, UILabel, UIView, UIViewController;
@protocol CNPresenterDelegate;

@interface CNGameCenterCell : CNLabeledCell

@property (readonly, nonatomic) UILabel *gameCenterLabel;
@property (retain, nonatomic) UIView *playerViewContainer;
@property (retain, nonatomic) UIView *playerView;
@property (retain, nonatomic) NSString *playerID;
@property (retain, nonatomic) UIViewController *profileViewController;
@property (weak, nonatomic) id<CNPresenterDelegate> presentingDelegate;
@property (nonatomic) BOOL showsGameCenterLabel;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)labelView;
- (void).cxx_destruct;
- (id)constantConstraintsForHorizontalLayout;
- (id)constantConstraintsForVerticalLayout;
- (void)dismissProfileViewController;
- (void)performDefaultAction;
- (void)presentPlayerProfile;
- (void)setCardGroupItem:(id)a0;
- (void)setLabelTextAttributes:(id)a0;
- (void)setupViews;
- (void)updateViewsWithCardGroupItem:(id)a0;
- (id)variableConstraints;
- (id)variableConstraintsForHorizontalLayout;

@end
