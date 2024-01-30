@class NSXPCListener, NSString;
@protocol STDynamicActivityAttributionServerHandle;

@interface STDynamicActivityAttributionListener : NSObject <NSXPCListenerDelegate>

@property (readonly, weak, nonatomic) id<STDynamicActivityAttributionServerHandle> serverHandle;
@property (readonly, nonatomic) NSXPCListener *xpcListener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
