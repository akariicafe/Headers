@class NSString, NSPointerArray, UIImage, NSExtension;

@interface WGWidgetInfo : NSObject {
    NSPointerArray *_registeredWidgetHosts;
    struct { unsigned char didInitializeWantsVisibleFrame : 1; } _widgetInfoFlags;
}

@property (retain, nonatomic, getter=_icon, setter=_setIcon:) UIImage *icon;
@property (retain, nonatomic, getter=_outlineIcon, setter=_setOutlineIcon:) UIImage *outlineIcon;
@property (nonatomic) struct CGSize { double width; double height; } preferredContentSize;
@property (copy, nonatomic, setter=_setDisplayName:) NSString *displayName;
@property (readonly, copy, nonatomic, getter=_sdkVersion) NSString *sdkVersion;
@property (nonatomic, setter=_setLargestAllowedDisplayMode:) long long largestAllowedDisplayMode;
@property (nonatomic, setter=_setWantsVisibleFrame:) BOOL wantsVisibleFrame;
@property (readonly, nonatomic) NSExtension *extension;
@property (readonly, copy, nonatomic) NSString *widgetIdentifier;
@property (readonly, nonatomic) double initialHeight;
@property (readonly, nonatomic) long long initialDisplayMode;

+ (double)maximumContentHeightForCompactDisplayMode;
+ (void)_updateRowHeightForContentSizeCategory;
+ (id)_productVersion;
+ (id)widgetInfoWithExtension:(id)a0;

- (void)_resetIcons;
- (void)_resetIconsImpl;
- (void)requestIconWithHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)requestSettingsIconWithHandler:(id /* block */)a0;
- (id)_queue_iconWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 forWidgetWithIdentifier:(id)a2 extension:(id)a3;
- (void)registerWidgetHost:(id)a0;
- (void)updatePreferredContentSize:(struct CGSize { double x0; double x1; })a0 forWidgetHost:(id)a1;
- (id)_queue_iconWithOutlineForWidgetWithIdentifier:(id)a0 extension:(id)a1;
- (id)initWithExtension:(id)a0;
- (id)_queue_iconFromWidgetBundleForWidgetWithIdentifier:(id)a0 extension:(id)a1;
- (void)_requestIcon:(BOOL)a0 withHandler:(id /* block */)a1;
- (id)widgetInfoWithExtension:(id)a0;
- (BOOL)isLinkedOnOrAfterSystemVersion:(id)a0;

@end
