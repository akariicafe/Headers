@class NSArray, NSString, NSDictionary, CALayer, UIView;

@interface CKMessageAcknowledgmentPickerBarView : UIView <CKPickerBarView> {
    CALayer *_anchorBubble;
    CALayer *_intermediateBubble;
    UIView *_pillBubble;
    NSDictionary *_groupAcknowledgmentCounts;
    long long _selectedAcknowledgment;
    char _balloonOrientation;
}

@property (nonatomic) struct CGPoint { double x; double y; } anchorBubblePosition;
@property (copy, nonatomic) NSArray *acknowledgmentViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithGroupCounts:(id)a0 selectedType:(long long)a1 orientation:(char)a2;
- (void)performShowAnimation:(id /* block */)a0;
- (void)performSendAnimation:(id /* block */)a0;
- (void)performCancelAnimation:(id /* block */)a0;
- (void)layoutSubviews;
- (void)updateDynamicColorsForBubbleLayers;
- (BOOL)_hasGroupCounts;
- (struct CGSize { double x0; double x1; })_ackViewsBoundsWidth;
- (void)performSelectedAnimation:(id /* block */)a0;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
