@class WBSJSCallbackHandler;

@interface WBSWebExtensionAPIWindowsEventListener : NSObject

@property (readonly, nonatomic) WBSJSCallbackHandler *callback;
@property (readonly, nonatomic) BOOL wantsEventsForNormalWindows;
@property (readonly, nonatomic) BOOL wantsEventsForPopupWindows;

- (void).cxx_destruct;
- (id)initWithCallback:(id)a0 wantsEventsForNormalWindows:(BOOL)a1 wantsEventsForPopupWindows:(BOOL)a2;

@end
