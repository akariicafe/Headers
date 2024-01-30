@class UIFont, NSArray, UIFocusGuide, NSString, UIView, UIButton;
@protocol PXUIWidgetFooterViewDelegate;

@interface PXUIWidgetFooterView : UIView {
    BOOL _isPerformingChanges;
    BOOL _isPerformingUpdates;
    struct { BOOL hasContent; BOOL disclosure; BOOL separators; BOOL focusGuide; } _needsUpdateFlags;
    struct { BOOL didSelectDisclosure; } _delegateRespondsTo;
}

@property (nonatomic, setter=_setHasContent:) BOOL _hasContent;
@property (copy, nonatomic, setter=_setConstraints:) NSArray *_constraints;
@property (readonly, nonatomic) UIButton *_disclosureButton;
@property (readonly, nonatomic) UIView *_leadingSeparator;
@property (readonly, nonatomic) UIView *_trailingSeparator;
@property (readonly, nonatomic) UIFocusGuide *_focusGuide;
@property (weak, nonatomic) id<PXUIWidgetFooterViewDelegate> delegate;
@property (copy, nonatomic) NSString *disclosureTitle;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) long long layoutStyle;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;

- (void)performChanges:(id /* block */)a0;
- (void)_updateIfNeeded;
- (BOOL)_needsUpdate;
- (void)tintColorDidChange;
- (void)_setNeedsUpdate;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)_invalidateFocusGuide;
- (id)_disclosureButtonCreateIfNeeded:(BOOL)a0;
- (id)_focusGuideCreateIfNeeded:(BOOL)a0;
- (void)_handleDisclosureButton:(id)a0;
- (void)_invalidateDisclosure;
- (void)_invalidateHasContent;
- (void)_invalidateSeparators;
- (id)_leadingSeparatorCreateIfNeeded:(BOOL)a0;
- (id)_trailingSeparatorCreateIfNeeded:(BOOL)a0;
- (void)_updateDisclosureIfNeeded;
- (void)_updateFocusGuideIfNeeded;
- (void)_updateHasContentIfNeeded;
- (void)_updateSeparatorsIfNeeded;

@end
