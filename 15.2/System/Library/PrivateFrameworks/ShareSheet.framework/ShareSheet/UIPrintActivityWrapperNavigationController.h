@class UIPrintInteractionController, NSString;

@interface UIPrintActivityWrapperNavigationController : UINavigationController <UIPrintInteractionControllerDelegate> {
    id /* block */ _completionHandler;
}

@property (nonatomic) BOOL presentedPrintInteractionController;
@property (retain, nonatomic) UIPrintInteractionController *printInteractionController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
