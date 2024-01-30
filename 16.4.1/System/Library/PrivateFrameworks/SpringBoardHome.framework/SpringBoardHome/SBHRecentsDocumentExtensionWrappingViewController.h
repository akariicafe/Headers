@class NSString, NSMapTable, _UIRemoteViewController, NSMutableArray;
@protocol SBHRecentsDocumentExtensionWrappingViewControllerDelegate;

@interface SBHRecentsDocumentExtensionWrappingViewController : UIViewController <SBHRecentsDocumentExtensionViewControlling> {
    NSMutableArray *_constraints;
    NSMapTable *_touchCancellationAssertionsToTokens;
}

@property (weak, nonatomic) id<SBHRecentsDocumentExtensionWrappingViewControllerDelegate> delegate;
@property (nonatomic) BOOL usesIntrinsicContentSizeBasedOnScreenSize;
@property (readonly, nonatomic) _UIRemoteViewController *wrappedRemoteViewController;
@property (readonly, nonatomic, getter=isTransparent) BOOL transparent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cancelTouchesForCurrentEventInHostedContent;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (BOOL)_canShowWhileLocked;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)setPreferredContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)wrapRemoteViewController:(id)a0;
- (void)dealloc;
- (void)_updateViewIntrinsicContentSize:(struct CGSize { double x0; double x1; })a0;
- (id)init;
- (void).cxx_destruct;
- (void)loadView;

@end
