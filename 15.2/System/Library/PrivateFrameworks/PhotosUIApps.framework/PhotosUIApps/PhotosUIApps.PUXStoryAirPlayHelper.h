@interface PhotosUIApps.PUXStoryAirPlayHelper : NSObject <PHAirPlayControllerContentProvider, UIAdaptivePresentationControllerDelegate> {
    void /* unknown type, empty encoding */ pickerViewController;
    void /* unknown type, empty encoding */ presentingViewController;
    void /* unknown type, empty encoding */ airPlayContainerViewController;
    void /* unknown type, empty encoding */ airPlayStoryViewController;
}

- (void)presentationControllerDidDismiss:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)contentViewControllerForAirPlayController:(id)a0;
- (void)airPlayControllerScreenAvailabilityChanged:(id)a0;

@end
