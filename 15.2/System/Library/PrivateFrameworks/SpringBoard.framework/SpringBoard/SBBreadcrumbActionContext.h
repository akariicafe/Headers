@class LSAppLink, NSDictionary, NSString, UISystemNavigationAction;

@interface SBBreadcrumbActionContext : NSObject {
    BOOL _didCaptureContext;
    unsigned long long _lastSource;
    BOOL _wasFromSpotlight;
    BOOL _wasFromAssistant;
    LSAppLink *_appLink;
    NSDictionary *_appLinkState;
    NSString *_previousSideBundleId;
    NSString *_breadcrumbAppBundleID;
    NSString *_breadcrumbSceneID;
    NSString *_primaryTitle;
    NSString *_secondaryTitle;
    unsigned long long _rightType;
    unsigned long long _leftType;
    UISystemNavigationAction *_action;
    NSDictionary *_destinationContexts;
    id /* block */ _responseHandler;
}

- (void).cxx_destruct;
- (void)dealloc;

@end
