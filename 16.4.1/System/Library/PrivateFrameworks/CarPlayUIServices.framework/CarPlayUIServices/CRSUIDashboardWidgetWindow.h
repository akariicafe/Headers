@class UIColor, NSArray, NSXPCConnection, NSString;

@interface CRSUIDashboardWidgetWindow : CRSUIWindow <CRSUIDashboardWidgetWindowClient, BSInvalidatable>

@property (retain, nonatomic) NSXPCConnection *dashboardWindowServiceConnection;
@property (retain, nonatomic) NSArray *focusableItems;
@property (retain, nonatomic) NSArray *widgetSizes;
@property (nonatomic) BOOL useSystemPrimaryFocusColor;
@property (readonly, nonatomic) UIColor *focusHighlightColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithWindowScene:(id)a0;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_invalidateConnection;
- (void)invalidate;
- (void).cxx_destruct;
- (void)setContentReady;
- (id)_clientFocusableItemForItem:(id)a0;
- (id)_focusableItemForClientItem:(id)a0;
- (void)_invalidateCurrentFocusableItems;
- (void)_windowDidCreateContext:(id)a0;
- (void)hostFocusableItem:(id)a0 focused:(BOOL)a1;
- (void)hostFocusableItem:(id)a0 pressed:(BOOL)a1;
- (void)hostSelectedFocusableItem:(id)a0;
- (void)hostSetUseSystemPrimaryFocusColor:(BOOL)a0;
- (void)hostSetWidgetSizes:(id)a0;
- (void)setFocusableViews:(id)a0;
- (void)setNeedsLargeSize:(BOOL)a0 animationSettings:(id)a1;

@end
