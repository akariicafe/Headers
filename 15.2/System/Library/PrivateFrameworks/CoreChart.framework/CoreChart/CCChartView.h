@class NSLayoutConstraint, NSString, NSArray, NSCalendar, CCVegaWorker, NSDictionary, NSLocale, NSObject, CCVegaWorkerClient, UIAccessibilityElement, CCVegaRenderer, NSMutableSet;
@protocol CCChartViewDelegate;

@interface CCChartView : UIView {
    CCVegaWorker *_worker;
    CCVegaWorkerClient *_workerClient;
    CCVegaRenderer *_renderer;
    NSString *_baseConfigType;
    NSString *_rendererType;
    NSString *_config;
    NSDictionary *_configDictionary;
    NSString *_spec;
    NSDictionary *_specDictionary;
    double _zoomFactor;
    NSArray *_legacyData;
    NSMutableSet *_knownNamedDatasets;
    BOOL _preventGestures;
    BOOL _caUpdateFromBackground;
    NSLocale *_locale;
    NSCalendar *_calendar;
    BOOL _didCustomizeLocale;
    BOOL _didCustomizeCalendar;
    double _rendererWidth;
    double _rendererHeight;
    unsigned long long _translatesChartSizeIntoConstraints;
    NSLayoutConstraint *_widthConstraint;
    NSLayoutConstraint *_heightConstraint;
}

@property (retain) NSString *config;
@property (retain) NSDictionary *configDictionary;
@property (retain) NSString *spec;
@property (retain) NSDictionary *specDictionary;
@property (nonatomic) BOOL CATransactionFromBackgroundThread;
@property (retain, nonatomic) NSString *rendererType;
@property (retain, nonatomic) NSString *baseConfig;
@property (retain, nonatomic) NSArray *data;
@property (retain, nonatomic) NSLocale *locale;
@property (retain, nonatomic) NSCalendar *calendar;
@property (nonatomic) double zoomFactor;
@property (readonly) struct CGImage { } *CGImage;
@property (nonatomic) double contentScaleFactor;
@property (nonatomic) unsigned long long translatesChartSizeIntoConstraints;
@property (weak) NSObject<CCChartViewDelegate> *delegate;
@property (retain) NSArray *accessibilityDataSeriesElements;
@property (retain) UIAccessibilityElement *accessibilityDataSeriesElement;

+ (void)cleanUp;
+ (void)registerExpressionFunction:(id /* block */)a0 withName:(id)a1;
+ (id)JSONStringFromDictionary:(id)a0;
+ (id)configForBaseConfigType:(id)a0;
+ (id)dictionaryFromJSONString:(id)a0;
+ (id)unwrapJSValue:(id)a0;
+ (id)compileSpec:(id)a0 config:(id)a1 baseConfig:(id)a2 expressionFunctionNames:(id)a3 error:(id *)a4;
+ (id)getBenchmarkRecords;
+ (void)preloadFrameworkAssets;
+ (id)compileSpecDictionary:(id)a0 configDictionary:(id)a1 baseConfig:(id)a2 expressionFunctionNames:(id)a3 error:(id *)a4;

- (id)imageNamed:(id)a0;
- (void)initialize;
- (void)render;
- (id)initWithSpec:(id)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (id)colorNamed:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setAccessibilityElements:(id)a0;
- (void).cxx_destruct;
- (id)renderer;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)setRenderer:(id)a0;
- (id)accessibilityElements;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)dealloc;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (long long)accessibilityContainerType;
- (void)registerExpressionFunction:(id /* block */)a0 withName:(id)a1;
- (id)initWithSpec:(id)a0 config:(id)a1;
- (id)initWithSpec:(id)a0 config:(id)a1 options:(id)a2;
- (void)refreshLocaleAndCalendar;
- (void)mouseHoverGestureRecognized:(id)a0;
- (void)lazilyInitializeRenderer;
- (void)setupWithSpec:(id)a0 options:(id)a1;
- (void)reinitializeRenderer;
- (id)loadChartDataFromURL:(id)a0 error:(id *)a1;
- (void)changeConstraints;
- (id)dynamicColorNamed:(id)a0;
- (id)localizedStringNamed:(id)a0;
- (void)triggerMouseEvent:(id)a0 type:(id)a1 setConsumed:(BOOL)a2;
- (id)eventToMouseEvent:(id)a0;
- (void)triggerMouseEvent:(id)a0 type:(id)a1;
- (void)setDefaultDataset:(id)a0;
- (void)setNamedDataset:(id)a0 rows:(id)a1;
- (void)changeDefaultDatasetByInserting:(id)a0 removingIDs:(id)a1;
- (void)changeNamedDataset:(id)a0 inserting:(id)a1 removingIDs:(id)a2;
- (id)getSignalWithName:(id)a0;
- (void)setSignalWithName:(id)a0 toValue:(id)a1;
- (id)addListener:(id /* block */)a0 toSignalWithName:(id)a1;
- (void)removeListener:(id)a0 fromSignalWithName:(id)a1;
- (void)setupWithSpec:(id)a0;
- (void)setupWithSpecDictionary:(id)a0;
- (void)setupWithSpecDictionary:(id)a0 options:(id)a1;
- (void)rendererDidUpdate;
- (void)setSpec:(id)a0 config:(id)a1;
- (void)setSpec:(id)a0 config:(id)a1 baseConfig:(id)a2;
- (void)setSpec:(id)a0 config:(id)a1 baseConfig:(id)a2 rendererType:(id)a3;
- (void)setSpecDictionary:(id)a0 configDictionary:(id)a1;
- (void)setSpecDictionary:(id)a0 configDictionary:(id)a1 baseConfig:(id)a2;
- (void)setSpecDictionary:(id)a0 configDictionary:(id)a1 baseConfig:(id)a2 rendererType:(id)a3;
- (id)renderToImageWithType:(unsigned long long)a0;
- (void)registerLocalExpressionFunction:(id /* block */)a0 withName:(id)a1;

@end
