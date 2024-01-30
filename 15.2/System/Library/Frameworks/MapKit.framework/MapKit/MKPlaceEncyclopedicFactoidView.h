@class NSString, MKVibrantLabel, NSLayoutConstraint, _MKUILabel, UILongPressGestureRecognizer;
@protocol NSItemProviderWriting;

@interface MKPlaceEncyclopedicFactoidView : MKPlaceSectionRowView <UIGestureRecognizerDelegate> {
    UILongPressGestureRecognizer *_longPressRecognizer;
    NSLayoutConstraint *_baselineToTopConstraint;
    NSLayoutConstraint *_baselineToBottomConstraint;
    NSLayoutConstraint *_baselineToBaselineConstraint;
    BOOL _isStandAlone;
}

@property (retain, nonatomic) MKVibrantLabel *keyLabel;
@property (retain, nonatomic) _MKUILabel *valueLabel;
@property (readonly, nonatomic) id<NSItemProviderWriting> draggableContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_handleLongPress:(id)a0;
- (void)copy:(id)a0;
- (void)_contentSizeDidChange;
- (void).cxx_destruct;
- (id)_keyLabelWithString:(id)a0;
- (id)_valueLabelWithString:(id)a0;
- (void)setUpConstraints;
- (id)_keyLabelFont;
- (void)_menuDismissed:(id)a0;
- (id)initWithTextItem:(id)a0 isStandAloneFactoid:(BOOL)a1;

@end
