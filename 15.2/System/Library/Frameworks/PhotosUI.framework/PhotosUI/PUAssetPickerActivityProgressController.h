@class NSString, NSProgress, PUAssetPickerActivityProgressViewController, UIAlertController;

@interface PUAssetPickerActivityProgressController : NSObject {
    PUAssetPickerActivityProgressViewController *_progressViewController;
    UIAlertController *_alertController;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) id /* block */ cancellationHandler;
@property (retain, nonatomic) NSProgress *progress;

- (void)_setupAlertController;
- (void)showFromSourceViewController:(id)a0 completion:(id /* block */)a1;
- (void)hideWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
