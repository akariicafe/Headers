@class UIButton, NSString, OBBoldTrayButton;

@interface WDBuddyFlowContinueFooterView : UIView {
    double _width;
    double _bottomInset;
    NSString *_buttonText;
    OBBoldTrayButton *_continueTrayButton;
}

@property (retain, nonatomic) UIButton *continueButton;

- (void)_updateForCurrentSizeCategory;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0 action:(SEL)a1 bottomInset:(double)a2 width:(double)a3 isLastScreen:(BOOL)a4;
- (void)setWaitingState;
- (void)resetWaitingState;

@end
