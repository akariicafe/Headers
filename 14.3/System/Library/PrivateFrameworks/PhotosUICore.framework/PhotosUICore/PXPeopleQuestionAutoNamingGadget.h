@class PXPeopleScalableAvatarView, UIButton, NSString, UILabel, PXGadgetSpec, PHPerson;
@protocol PXGadgetDelegate;

@interface PXPeopleQuestionAutoNamingGadget : UIViewController <PXGadget>

@property (retain, nonatomic) PHPerson *person;
@property (retain, nonatomic) PXPeopleScalableAvatarView *keyFaceView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *yesButton;
@property (retain, nonatomic) UIButton *noButton;
@property (retain, nonatomic) UIButton *undoButton;
@property (copy, nonatomic) NSString *possibleName;
@property (readonly, nonatomic) unsigned long long gadgetType;
@property (readonly, nonatomic) unsigned long long gadgetCapabilities;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec;
@property (weak, nonatomic) id<PXGadgetDelegate> delegate;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) unsigned long long accessoryButtonType;
@property (readonly, nonatomic) NSString *accessoryButtonTitle;
@property (readonly, nonatomic) unsigned long long headerStyle;
@property (nonatomic) long long priority;
@property (readonly, nonatomic) Class collectionViewItemClass;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleContentRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithPerson:(id)a0 possibleName:(id)a1;
- (void)yesButtonTapped:(id)a0;
- (void)noButtonTapped:(id)a0;
- (void)undoButtonTapped:(id)a0;
- (id)contentViewController;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)viewDidLoad;

@end
