@class NSString, NSXPCListener;
@protocol STDynamicActivityAttributionServerHandle;

@interface STDynamicActivityAttributionListener : NSObject <NSXPCListenerDelegate> {
    id<STDynamicActivityAttributionServerHandle> _serverHandle;
    NSXPCListener *_xpcListener;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
