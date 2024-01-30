@class _UIBackgroundViewConfiguration, _UISystemBackgroundView, UIView;
@protocol _UIContentViewConfiguration, UITableConstants;

@interface _UICollectionViewListHeaderFooter : UICollectionReusableView {
    struct { unsigned char style : 3; unsigned char needsConfigurationStateUpdate : 1; unsigned char hasCustomBackgroundColor : 1; unsigned char hasCustomBackgroundViewConfigurationProvider : 1; unsigned char hasCustomBackgroundViewConfiguration : 1; unsigned char automaticallyUpdatesBackgroundViewConfiguration : 1; unsigned char automaticallyUpdatesContentViewConfiguration : 1; } _headerFooterFlags;
    Class _contentViewConfigurationClass;
    id /* block */ _contentViewConfigurationProvider;
    _UISystemBackgroundView *_systemBackgroundView;
    id /* block */ _backgroundViewConfigurationProvider;
}

@property (retain, nonatomic) UIView *contentView;
@property (readonly, nonatomic, getter=_contentViewInsets) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentViewInsets;
@property (readonly, nonatomic, getter=_constants) id<UITableConstants> constants;
@property (copy, nonatomic, getter=_contentViewConfiguration, setter=_setContentViewConfiguration:) id<_UIContentViewConfiguration> _contentViewConfiguration;
@property (nonatomic, getter=_automaticallyUpdatesContentViewConfiguration, setter=_setAutomaticallyUpdatesContentViewConfiguration:) BOOL _automaticallyUpdatesContentViewConfiguration;
@property (copy, nonatomic, getter=_contentViewConfigurationProvider, setter=_setContentViewConfigurationProvider:) id /* block */ _contentViewConfigurationProvider;
@property (copy, nonatomic, getter=_backgroundViewConfiguration, setter=_setBackgroundViewConfiguration:) _UIBackgroundViewConfiguration *_backgroundViewConfiguration;
@property (nonatomic, getter=_automaticallyUpdatesBackgroundViewConfiguration, setter=_setAutomaticallyUpdatesBackgroundViewConfiguration:) BOOL _automaticallyUpdatesBackgroundViewConfiguration;
@property (copy, nonatomic, getter=_backgroundViewConfigurationProvider, setter=_setBackgroundViewConfigurationProvider:) id /* block */ _backgroundViewConfigurationProvider;
@property (readonly, nonatomic) unsigned long long _viewConfigurationState;

+ (Class)_contentViewClass;

- (struct CGSize { double x0; double x1; })_contentTargetSizeForTargetSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2 forUseWithSizeThatFits:(BOOL)a3;
- (void)_didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (void)_layoutContentView;
- (void).cxx_destruct;
- (void)setSemanticContentAttribute:(long long)a0;
- (void)_populateArchivedSubviews:(id)a0;
- (void)prepareForReuse;
- (void)_applyBackgroundViewConfiguration:(id)a0;
- (void)_resetBackgroundColor;
- (id /* block */)_defaultBackgroundViewConfigurationProvider;
- (void)setBackgroundColor:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_updateDefaultBackgroundAppearance;
- (long long)_styleFromLayoutAttributes:(id)a0;
- (void)_setLayoutAttributes:(id)a0;
- (void)layoutSubviews;
- (void)_setNeedsConfigurationStateUpdate;
- (void)_performConfigurationStateUpdate;
- (void)_updateBackgroundViewConfigurationForState:(unsigned long long)a0;
- (void)_updateContentViewConfigurationForState:(unsigned long long)a0;
- (void)_updateViewConfigurationsWithState:(unsigned long long)a0;
- (void)_layoutSystemBackgroundView;
- (void)_resetBackgroundViewConfiguration;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateConstants;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setUserInteractionEnabled:(BOOL)a0;
- (void)encodeWithCoder:(id)a0;

@end
