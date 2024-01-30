@class MPPlaybackArchive, NSString, NSXPCConnection, NSError, _EXHostViewController, UIBarButtonItem;
@protocol SSUSoundscapesPickerControllerDelegate;

@interface _SSUSoundScapesDelegateForwarder : NSObject <SSUViewServiceHostProtocol> {
    MPPlaybackArchive *_lastPickedArchive;
    NSError *_lastPickedError;
    UIBarButtonItem *_doneButton;
    BOOL _exiting;
}

@property (weak) id<SSUSoundscapesPickerControllerDelegate> delegate;
@property (weak) _EXHostViewController *viewController;
@property (retain) NSXPCConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cleanup;
- (void).cxx_destruct;
- (void)updateNavigationItem;
- (void)requestDismiss;
- (void)pickerDismissed;
- (id)initForViewController:(id)a0;
- (void)mediaPickerConfirmChoices;
- (void)selectedSoundScapes:(id)a0 withError:(id)a1;

@end
