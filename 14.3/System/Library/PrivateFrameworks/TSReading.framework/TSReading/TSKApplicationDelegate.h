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

+ (id)sharedDelegate;
+ (BOOL)isUnitTesting;
+ (void)setSurrogateDelegate:(id)a0;
+ (id)documentDirectoryPath;

- (id)init;
- (void)dealloc;
- (BOOL)openURL:(id)a0;
- (BOOL)supportsRTL;
- (id)createCompatibilityDelegate;
- (BOOL)openURL:(id)a0 sourceDocumentRoot:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })applicationToolbarFrame;
- (BOOL)shouldRenderContactShadow;
- (BOOL)shouldRenderCurvedShadow;
- (BOOL)supportsScrollingInPhoneCommentUI;
- (BOOL)shouldValidateMasterLayoutWhileInsertingRows;
- (id)previewImageForType:(id)a0;
- (id)appChartPropertyOverrides;
- (id)invalidURLSchemes;
- (id)validURLSchemes;
- (id)defaultHyperlinkURL;
- (BOOL)shouldGenerateGuidesForOffscreenLayouts;
- (id)toolbarButtonForModalDoneWithTarget:(id)a0 action:(SEL)a1;

@end
