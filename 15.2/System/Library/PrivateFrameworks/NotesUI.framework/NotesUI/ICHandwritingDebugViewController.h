@class UITextView, NSArray, UIActivityIndicatorView, NSString, NSObject;
@protocol OS_dispatch_queue, ICHandwritingDebugDelegate;

@interface ICHandwritingDebugViewController : UIViewController <PKVisualizationManager>

@property (retain, nonatomic) NSArray *drawings;
@property (retain, nonatomic) UITextView *textView;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *recognitionQueue;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (weak, nonatomic) id<ICHandwritingDebugDelegate> handwritingDebugDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)close;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)refresh;
- (void)visualizationManagerDidUpdateRecognitionStatus:(id)a0;
- (id)handwritingDebugWindow;

@end
