@class UIColor, NSArray, UIVisualEffectView, NSString, UILabel, UIFont, UIButton;
@protocol PXUIWidgetHeaderViewDelegate;

@interface PXUIWidgetHeaderView : UIView {
    BOOL _isPerformingChanges;
    BOOL _isPerformingUpdates;
    struct { BOOL hasContent; BOOL title; BOOL subtitle; BOOL caption; } _needsUpdateFlags;
    struct { BOOL didSelectSubtitle; BOOL didSelectCaption; } _delegateRespondsTo;
}

@property (nonatomic, setter=_setHasContent:) BOOL _hasContent;
@property (copy, nonatomic, setter=_setConstraints:) NSArray *_constraints;
@property (nonatomic, setter=_setCurrentHeight:) double _currentHeight;
@property (readonly, nonatomic) UILabel *_titleLabel;
@property (readonly, nonatomic) UILabel *_subtitleLabel;
@property (readonly, nonatomic) UIButton *_subtitleButton;
@property (readonly, nonatomic) UILabel *_captionLabel;
@property (readonly, nonatomic) UIButton *_captionButton;
@property (readonly, nonatomic) UIVisualEffectView *_visualEffectView;
@property (weak, nonatomic) id<PXUIWidgetHeaderViewDelegate> delegate;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *caption;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIFont *primaryFont;
@property (retain, nonatomic) UIFont *secondaryFont;
@property (nonatomic) BOOL allowUserInteractionWithSubtitle;
@property (nonatomic) BOOL allowUserInteractionWithCaption;
@property (nonatomic) long long layoutStyle;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (nonatomic) double minimumDistanceBetweenTopAndFirstBaseline;
@property (nonatomic) double distanceBetweenTitleBaselineAndSubtitleBaseline;
@property (nonatomic) double horizontalSpacingBetweenTitleAndSubtitle;
@property (nonatomic) double minimumDistanceBetweenLastBaselineAndBottom;

- (void)layoutSubviews;
- (void)performChanges:(id /* block */)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_updateIfNeeded;
- (void)_invalidateTitle;
- (BOOL)_needsUpdate;
- (void)_setNeedsUpdate;
- (void).cxx_destruct;
- (void)_invalidateSubtitle;
- (void)_updateTitleIfNeeded;
- (BOOL)_hasAccessibilityLargeText;
- (void)_invalidateHasContent;
- (void)_updateHasContentIfNeeded;
- (id)_visualEffectViewCreateIfNeeded:(BOOL)a0;
- (id)_titleLabelCreateIfNeeded:(BOOL)a0;
- (id)_subtitleLabelCreateIfNeeded:(BOOL)a0;
- (id)_subtitleButtonCreateIfNeeded:(BOOL)a0;
- (id)_captionLabelCreateIfNeeded:(BOOL)a0;
- (id)_captionButtonCreateIfNeeded:(BOOL)a0;
- (BOOL)_hasSubtitle;
- (BOOL)_canComposeTitleWithSubtitle;
- (void)_handleSubtitleButton:(id)a0;
- (void)_handleCaptionButton:(id)a0;
- (void)_updateSubtitleIfNeeded;
- (void)_invalidateCaption;
- (void)_updateCaptionIfNeeded;

@end
