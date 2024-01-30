@class NSURLRequest, NSString, WebPolicyDecisionListener;
@protocol WebPluginContainerCheckController;

@interface WebPluginContainerCheck : NSObject {
    NSURLRequest *_request;
    NSString *_target;
    id<WebPluginContainerCheckController> _controller;
    id _resultObject;
    SEL _resultSelector;
    id _contextInfo;
    BOOL _done;
    WebPolicyDecisionListener *_listener;
}

+ (id)checkWithRequest:(id)a0 target:(id)a1 resultObject:(id)a2 selector:(SEL)a3 controller:(id)a4 contextInfo:(id)a5;

- (void)cancel;
- (void)dealloc;
- (id)contextInfo;
- (void)start;
- (id)initWithRequest:(id)a0 target:(id)a1 resultObject:(id)a2 selector:(SEL)a3 controller:(id)a4 contextInfo:(id)a5;
- (void)_continueWithPolicy:(unsigned char)a0;
- (id)_actionInformationWithURL:(id)a0;
- (BOOL)_isForbiddenFileLoad;
- (void)_askPolicyDelegate;

@end
