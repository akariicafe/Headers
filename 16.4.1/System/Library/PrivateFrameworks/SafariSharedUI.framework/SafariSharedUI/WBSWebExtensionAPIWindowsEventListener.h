@class WBSJSCallbackHandler;

@interface WBSWebExtensionAPIWindowsEventListener : NSObject {
    BOOL _wantsEventsForNormalWindows;
    BOOL _wantsEventsForPopupWindows;
    WBSJSCallbackHandler *_callback;
}

- (void).cxx_destruct;

@end
