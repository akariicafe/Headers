@class NSMutableArray, NSString, NSLayoutConstraint, _MKPlaceReservationInfo, UISegmentedControl, UIButton;

@interface MKPlaceReservationRowView : MKPlaceSectionRowView {
    UISegmentedControl *_openTimesControl;
    UIButton *_buttonMakeReservation;
    UIButton *_buttonAttribution;
    NSMutableArray *_mutableConstraints;
    NSLayoutConstraint *_constraintButtonTopMargin;
    NSLayoutConstraint *_constraintButtonBottomMargin;
}

@property (readonly, nonatomic) _MKPlaceReservationInfo *reservationInfo;
@property (nonatomic) unsigned long long selectedTimeIndex;
@property (retain, nonatomic) NSString *selectedTimeString;

- (void)_updateTintColor;
- (void)tintColorDidChange;
- (void).cxx_destruct;
- (void)_contentSizeDidChange;
- (id)initWithReservationInfo:(id)a0;
- (id)_newButtonForAttribution:(BOOL)a0;
- (id)_attributedStringFromButtonTitle:(id)a0 useSmallFont:(BOOL)a1;
- (void)_actionMakeReservation;
- (void)_setupImmutableConstraints;
- (void)_updateWithReservationInfo;
- (id)_buttonFontLarge;
- (id)_buttonFontSmall;
- (void)_updateMutableConstraints;
- (double)_buttonBottomMargin;
- (double)_buttonTopMargin;
- (void)_updateButtonTitleAttributes;

@end
