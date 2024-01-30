@class UIWindow_Custom, NSString, NSPredicate, NSExtension, BTDevicePickerRemoteViewController;
@protocol BTDevicePickerDelegate, NSCopying;

@interface BTDevicePicker : NSObject <BTDevicePickerRemoteViewControllerHost> {
    UIWindow_Custom *_alertWindow;
    NSString *_title;
    unsigned int _service;
    NSPredicate *_predicate;
}

@property (retain, nonatomic) NSExtension *extension;
@property (copy, nonatomic) id<NSCopying> extensionRequestIdentifier;
@property (retain, nonatomic) BTDevicePickerRemoteViewController *devicePickerRemoteViewController;
@property (nonatomic) id<BTDevicePickerDelegate> delegate;

- (void)applicationWillResignActive:(id)a0;
- (void)dismissAnimated:(BOOL)a0;
- (void)show;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 service:(unsigned int)a1 discoveryNameFilter:(id)a2;
- (void)discoveredDevice:(id)a0 deviceAddress:(id)a1;
- (void)createAlertWindowForRootViewController:(id)a0;
- (void)didDismissWithResult:(long long)a0 deviceAddress:(id)a1;

@end
