@class NSXPCListener, NSString;
@protocol _SYBacklinkIndicatorUsageService_TestingDelegate;

@interface SYBacklinkIndicatorUsageService : NSObject <NSXPCListenerDelegate, SYBacklinkIndicatorUsageProtocol>

@property (class, weak, nonatomic) id<_SYBacklinkIndicatorUsageService_TestingDelegate> _testingDelegate;

@property (retain, nonatomic) NSXPCListener *listener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)_listenerEndpoint;
+ (void)beginObservingUsage;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (oneway void)didActivateBacklinkItemWithIdentifier:(id)a0;
- (oneway void)didDismissBacklinkItemWithIdentifier:(id)a0;

@end
