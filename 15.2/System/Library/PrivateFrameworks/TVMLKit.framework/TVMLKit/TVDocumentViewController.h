@class NSDictionary, TVApplicationController;
@protocol TVDocumentViewControllerDelegate;

@interface TVDocumentViewController : UIViewController {
    struct { BOOL respondsToWillUpdate; BOOL respondsToDidUpdate; BOOL respondsToHandleEvent; BOOL respondsToDidFailWithError; BOOL respondsToDidUpdateWithContext; } _delegateFlags;
}

@property (retain, nonatomic) NSDictionary *documentContext;
@property (readonly, weak, nonatomic) TVApplicationController *appController;
@property (weak, nonatomic) id<TVDocumentViewControllerDelegate> delegate;

+ (id)viewControllerWithContext:(id)a0 forAppController:(id)a1;

- (void).cxx_destruct;
- (void)didChangeDocumentContext;
- (id)tvdvc_initWithNibName:(id)a0 bundle:(id)a1;
- (void)updateUsingContext:(id)a0;
- (void)willUpdateDocument;
- (void)didUpdateDocument;
- (void)didUpdateWithContext:(id)a0;
- (void)didFailUpdateWithError:(id)a0;
- (BOOL)handleEvent:(id)a0 withElement:(id)a1 targetResponder:(id)a2;

@end
