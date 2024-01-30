@class NSString;
@protocol TSKCompatibilityDelegate;

@interface TSKApplicationDelegate : NSObject <TSKApplicationDelegate>

@property (readonly, nonatomic) BOOL tableHeaderInspectorShowsFreezeHeaderRowsSwitch;
@property (readonly, nonatomic) BOOL tableHeaderInspectorShowsFreezeHeaderColumnsSwitch;
@property (readonly, nonatomic) BOOL tableHeaderInspectorShowsRepeatHeaderRowsSwitch;
@property (readonly, nonatomic) BOOL tableCellInspectorShowsNaturalAlignment;
@property (readonly, nonatomic) BOOL textInspectorShowsMoreSubpane;
@property (retain, nonatomic) id<TSKCompatibilityDelegate> compatibilityDelegate;
@property (readonly, nonatomic) NSString *applicationName;
@property (readonly, nonatomic) NSString *documentTypeDisplayName;
@property (readonly, nonatomic) NSString *templateTypeDisplayName;
@property (readonly, getter=isActivating) BOOL activating;
@property (readonly, getter=isInBackground) BOOL inBackground;
@property (readonly, nonatomic) BOOL designModeEnabled;
@property (readonly, nonatomic) BOOL performanceModeEnabled;
@property (readonly, nonatomic) BOOL centerOnInitialSelection;
@property (readonly, nonatomic) BOOL isCanvasFullScreen;

+ (BOOL)isUnitTesting;
+ (id)sharedDelegate;
+ (void)setSurrogateDelegate:(id)a0;
+ (id)documentDirectoryPath;

- (BOOL)openURL:(id)a0;
- (void)dealloc;
- (id)init;
- (BOOL)supportsRTL;
- (id)createCompatibilityDelegate;
- (id)validURLSchemes;
- (id)appChartPropertyOverrides;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })applicationToolbarFrame;
- (id)defaultHyperlinkURL;
- (id)invalidURLSchemes;
- (BOOL)openURL:(id)a0 sourceDocumentRoot:(id)a1;
- (id)previewImageForType:(id)a0;
- (BOOL)shouldGenerateGuidesForOffscreenLayouts;
- (BOOL)shouldRenderContactShadow;
- (BOOL)shouldRenderCurvedShadow;
- (BOOL)shouldValidateMasterLayoutWhileInsertingRows;
- (BOOL)supportsScrollingInPhoneCommentUI;
- (id)toolbarButtonForModalDoneWithTarget:(id)a0 action:(SEL)a1;

@end
