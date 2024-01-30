@class APPrivacyMarker;
@protocol APPCDiagnosticMetricsHelping;

@interface APPCMetricsView : UIView <APPCMetricRegister> {
    void /* unknown type, empty encoding */ startsCollapsed;
    void /* unknown type, empty encoding */ frameObserver;
    void /* unknown type, empty encoding */ currentlyViewable;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ promotedContent;
    void /* unknown type, empty encoding */ debugView;
    void /* unknown type, empty encoding */ forcedReadiness;
    void /* unknown type, empty encoding */ wasTapped;
    void /* unknown type, empty encoding */ isBackgrounded;
    void /* unknown type, empty encoding */ timingTracking;
    void /* unknown type, empty encoding */ visibilityChecker;
    void /* unknown type, empty encoding */ needToSendOnScreen;
    void /* unknown type, empty encoding */ visbilityCheckingView;
    void /* unknown type, empty encoding */ offsetObserver;
    void /* unknown type, empty encoding */ _isCollapsed;
    void /* unknown type, empty encoding */ readinessObserver;
    void /* unknown type, empty encoding */ visibleThresholds;
    void /* unknown type, empty encoding */ contentView;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ interactionPresentationDelegate;
@property (nonatomic) void /* unknown type, empty encoding */ ready;
@property (nonatomic, readonly) APPrivacyMarker *privacyMarkerView;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } privacyMarkerFrame;
@property (nonatomic, weak) void /* unknown type, empty encoding */ readyDelegate;
@property (nonatomic, readonly) id<APPCDiagnosticMetricsHelping> diagnosticMetricHelper;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic, retain) void /* unknown type, empty encoding */ promotedContentInfo;

- (void)willMoveToSuperview:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)expand;
- (id)initWithCoder:(id)a0;
- (void)didMoveToSuperview;
- (void)appWillResignActive:(id)a0;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)collapse;
- (void)unloadAdViewIfRequired;
- (void)willEnterforeground;
- (void)appBackgrounded:(id)a0;
- (void)appForegrounded:(id)a0;
- (void)registerHandlerForAllMetricsWithClosure:(id /* block */)a0;
- (void)removeHandler;
- (BOOL)safeExpandAndReturnError:(id *)a0;
- (BOOL)safeCollapseAndReturnError:(id *)a0;

@end
