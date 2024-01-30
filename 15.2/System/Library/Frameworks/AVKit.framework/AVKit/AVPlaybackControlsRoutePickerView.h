@class NSString, AVButton, AVLayoutItemAttributes;

@interface AVPlaybackControlsRoutePickerView : AVRoutePickerView <AVPlaybackControlsViewItem> {
    AVButton *_customButton;
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

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutAttributesDidChange;
- (void)_updateLayoutItem;
- (void)setPrioritizesVideoDevices:(BOOL)a0;
- (void)_updateCustomButtonMicaPackage;
- (void)updateButtonAppearance;

@end
