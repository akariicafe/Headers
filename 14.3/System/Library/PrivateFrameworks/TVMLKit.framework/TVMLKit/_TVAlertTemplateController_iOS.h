@class NSArray, UIAlertController, TVImageProxy, NSString, NSMutableArray;

@interface _TVAlertTemplateController_iOS : UIViewController {
    NSMutableArray *_additionalLabels;
    UIAlertController *_alertController;
    NSArray *_buttonElements;
    TVImageProxy *_imageProxy;
    struct CGSize { double width; double height; } _imageSize;
    NSString *_message;
    NSString *_title;
}

- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)a0;
- (void)didMoveToParentViewController:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)updateWithTemplateElement:(id)a0;
- (void)updateWithViewElement:(id)a0;
- (void)_dismissAlertControllerAnimated:(BOOL)a0;
- (void)_presentAlertController;

@end
