@interface AVPictureInPicturePlatformAdapterAccessibility : __AVPictureInPicturePlatformAdapterAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)init;
- (void)startPictureInPicture;
- (void)pictureInPictureViewControllerViewWillDisappear:(id)a0;
- (void)pictureInPictureViewControllerViewDidAppear:(id)a0;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_axSetIsPictureInPictureActive:(BOOL)a0;
- (BOOL)_axIsPictureInPictureActive;
- (void)_axPostPIPStoppedNotification;

@end
