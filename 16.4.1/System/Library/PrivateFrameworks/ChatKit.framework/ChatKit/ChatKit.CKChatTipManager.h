@interface ChatKit.CKChatTipManager : NSObject <UIPopoverPresentationControllerDelegate> {
    void /* unknown type, empty encoding */ chatController;
    void /* unknown type, empty encoding */ tipPopoverController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dictationLongPressGesture;
}

+ (void)initializeTips;

- (void)presentationControllerDidDismiss:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)chatControllerDidAppear;
- (void)chatControllerDidLoad;
- (void)chatViewDidDisappear;
- (void)chatViewDidPresentAudioMessagePlugin;
- (void)chatViewMorePluginsBrowserDidDismiss;
- (void)handleDictationButtonLongPressGesture:(id)a0;
- (id)initWithChatController:(id)a0;
- (void)messagesDidEnterBackground:(id)a0;

@end
