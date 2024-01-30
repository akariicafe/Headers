@interface PhotosUIApps.PUXStoryAirPlayHelper : NSObject <PHAirPlayControllerContentProvider, UIAdaptivePresentationControllerDelegate> {
    void /* unknown type, empty encoding */ pickerViewController;
    void /* unknown type, empty encoding */ presentingViewController;
    void /* unknown type, empty encoding */ airPlayContainerViewController;
    void /* unknown type, empty encoding */ airPlayStoryViewController;
}

- (void)presentationControllerDidDismiss:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)airPlayControllerScreenAvailabilityChanged:(id)a0;
- (id)contentViewControllerForAirPlayController:(id)a0;

@end
