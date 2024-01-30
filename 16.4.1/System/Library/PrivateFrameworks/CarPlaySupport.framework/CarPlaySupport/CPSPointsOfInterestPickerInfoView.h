@class UIStackView, NSString, UILabel, CPPointOfInterest, CPSStyledTextButton;
@protocol CPSPointsOfInterestPickerInfoDelegate;

@interface CPSPointsOfInterestPickerInfoView : UIView <CPSButtonDelegate, CPSActionButtonLayoutDelegate, CPSLinearFocusProviding>

@property (retain, nonatomic) CPPointOfInterest *model;
@property (retain, nonatomic) UIStackView *topStackView;
@property (retain, nonatomic) UIStackView *bottomStackView;
@property (retain, nonatomic) UILabel *detailsTitle;
@property (retain, nonatomic) UILabel *detailsSubtitle;
@property (retain, nonatomic) UILabel *detailsInformativeText;
@property (retain, nonatomic) CPSStyledTextButton *primaryButton;
@property (retain, nonatomic) CPSStyledTextButton *secondaryButton;
@property (weak, nonatomic) id<CPSPointsOfInterestPickerInfoDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL useRightHandDriveFocusGuide;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })safeAreaInsets;
- (void).cxx_destruct;
- (void)setupViews;
- (void)updateWithModel:(id)a0;
- (void)didSelectButton:(id)a0;
- (id)_linearFocusItems;

@end
