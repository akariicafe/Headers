@class NSString, AVButton, AVLayoutItemAttributes;

@interface AVPlaybackControlsRoutePickerView : AVRoutePickerView <AVPlaybackControlsViewItem> {
    AVButton *_customButton;
    BOOL _secondGenerationButton;
}

@property (retain, nonatomic) NSString *currentMicaPackageName;
@property (readonly, nonatomic) AVButton *customButton;
@property (nonatomic) struct CGSize { double x0; double x1; } extrinsicContentSize;
@property (nonatomic, getter=isCollapsed) BOOL collapsed;
@property (nonatomic, getter=isIncluded) BOOL included;
@property (nonatomic, getter=isRemoved) BOOL removed;
@property (readonly, nonatomic, getter=isCollapsedOrExcluded) BOOL collapsedOrExcluded;
@property (nonatomic) BOOL hasAlternateAppearance;
@property (nonatomic) BOOL hasFullScreenAppearance;
@property (readonly, nonatomic) AVLayoutItemAttributes *layoutAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutAttributesDidChange;
- (void)updateButtonAppearance;
- (void)_updateLayoutItem;
- (void)setPrioritizesVideoDevices:(BOOL)a0;
- (id)initWithSecondGenerationButton:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)_updateCustomButtonMicaPackage;
- (void).cxx_destruct;

@end
