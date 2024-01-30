@class NSXPCListener, NSString, NSObject;
@protocol ViewServiceHelperDelegate;

@interface ViewServiceHelper : NSObject <NSXPCListenerDelegate, ViewServiceProtocol>

@property (retain) NSXPCListener *listener;
@property NSObject<ViewServiceHelperDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)run;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)handleStatusBarTap;
- (void)termsAndConditionsResponse:(id)a0;
- (void)pauseResumeResponse:(id)a0;
- (void)pidNotification:(id)a0;

@end
