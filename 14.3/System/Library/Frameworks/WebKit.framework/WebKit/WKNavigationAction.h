@class _WKUserInitiatedAction, WKNavigation, NSString, NSURL, NSURLRequest, WKFrameInfo;

@interface WKNavigationAction : NSObject <WKObject> {
    struct ObjectStorage<API::NavigationAction> { struct type { unsigned char __lx[592]; } data; } _navigationAction;
}

@property (readonly, nonatomic) NSURL *_originalURL;
@property (readonly, nonatomic, getter=_isUserInitiated) BOOL _userInitiated;
@property (readonly, nonatomic) BOOL _canHandleRequest;
@property (readonly, nonatomic) BOOL _shouldOpenExternalSchemes;
@property (readonly, nonatomic) BOOL _shouldOpenAppLinks;
@property (readonly, nonatomic) BOOL _shouldPerformDownload;
@property (readonly, nonatomic) BOOL _shouldOpenExternalURLs;
@property (readonly, nonatomic) _WKUserInitiatedAction *_userInitiatedAction;
@property (readonly, nonatomic) long long _syntheticClickType;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } _clickLocationInRootViewCoordinates;
@property (readonly, nonatomic) long long modifierFlags;
@property (readonly, nonatomic) BOOL _isRedirect;
@property (readonly, nonatomic) WKNavigation *_mainFrameNavigation;
@property (readonly, copy, nonatomic) WKFrameInfo *sourceFrame;
@property (readonly, copy, nonatomic) WKFrameInfo *targetFrame;
@property (readonly, nonatomic) long long navigationType;
@property (readonly, copy, nonatomic) NSURLRequest *request;
@property (readonly) struct Object { void /* function */ **x0; id x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;

@end
