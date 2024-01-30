@class _MKUILabel;

@interface MKPlaceInfoPhoneNumberView : MKPlaceInfoContactRowView {
    _MKUILabel *_optsOutOfAdsView;
}

@property (nonatomic) BOOL optsOutOfAds;

- (id)_icon;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (int)analyticsTarget;
- (Class)_labeledValueExpectedValueType;
- (id)_iconAccessibilityLabel;
- (id)formatPhoneNumber:(id)a0;
- (id)draggableContent;
- (id)_valueString;

@end
