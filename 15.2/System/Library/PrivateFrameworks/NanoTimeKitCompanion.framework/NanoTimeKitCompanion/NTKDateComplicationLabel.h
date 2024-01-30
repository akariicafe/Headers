@class UIColor, NSString, CLKFont, UILabel, CLKDevice, UIView;
@protocol NTKComplicationDisplayObserver;

@interface NTKDateComplicationLabel : UIControl <NTKDateComplicationDisplay, NTKControl> {
    BOOL _frozen;
    NSString *_currentDateText;
    UILabel *_internalLabel;
    UIView *_highlightView;
    struct CGSize { double width; double height; } _cachedSize;
    struct _NSRange { unsigned long long location; unsigned long long length; } _dayTextRange;
    BOOL _cachedSizeIsValid;
    UIColor *_textColor;
    UIColor *_computedTextColor;
}

@property (readonly, nonatomic) double _lastLineBaseline;
@property (nonatomic, setter=_setFirstLineBaselineFrameOriginY:) double _firstLineBaselineFrameOriginY;
@property (nonatomic, setter=_setLastLineBaselineFrameOriginY:) double _lastLineBaselineFrameOriginY;
@property (readonly, nonatomic) long long sizeStyle;
@property (readonly, nonatomic) long long accentType;
@property (readonly, nonatomic) CLKDevice *device;
@property (retain, nonatomic) CLKFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *accentColor;
@property (nonatomic) BOOL usesLegibility;
@property (nonatomic) BOOL legibilityHidden;
@property (nonatomic) unsigned long long overrideDateStyle;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } touchEdgeInsets;
@property (weak, nonatomic) id<NTKComplicationDisplayObserver> displayObserver;
@property (nonatomic) BOOL canUseCurvedText;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic) BOOL shouldUseTemplateColors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)_updateTextColor;
- (double)_cornerRadius;
- (void)_setText:(id)a0;
- (void)setShadowColor:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)_setFont:(id)a0;
- (double)_firstLineBaselineOffsetFromBoundsTop;
- (struct CGSize { double x0; double x1; })_highlightInset;
- (id)initWithSizeStyle:(long long)a0 accentType:(long long)a1 forDevice:(id)a2;
- (BOOL)shouldCancelTouchesInScrollview;
- (void)setDateComplicationText:(id)a0 withDayRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 forDateStyle:(unsigned long long)a2;
- (void)_computeTextColor;
- (double)_legibtilityShadowRadius;
- (void)_invalidateInternalLabelSize;
- (void)_applyAccentColorAttributes;
- (id)_attributedStringAccentingNumbersInString:(id)a0;

@end
