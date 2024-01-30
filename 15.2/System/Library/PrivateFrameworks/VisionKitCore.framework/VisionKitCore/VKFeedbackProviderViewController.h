@class NSArray, NSMutableSet, UIWindow;
@protocol VKFeedbackProviderViewControllerDelegate;

@interface VKFeedbackProviderViewController : UIViewController {
    NSArray *_attachments;
    unsigned long long _options;
    NSMutableSet *_selectedAttachments;
    UIWindow *_window;
}

@property (weak) id<VKFeedbackProviderViewControllerDelegate> delegate;

- (void)viewDidLoad;
- (BOOL)_canShowWhileLocked;
- (void)loadView;
- (void).cxx_destruct;
- (void)_createContentView;
- (void)dealloc;
- (void)present;
- (id)_contentRowButtonWithTitle:(id)a0 tag:(long long)a1 allowToggle:(BOOL)a2;
- (void)_toggleContentRowButton:(id)a0;
- (id)initWithOptions:(unsigned long long)a0 attachments:(id)a1;

@end
