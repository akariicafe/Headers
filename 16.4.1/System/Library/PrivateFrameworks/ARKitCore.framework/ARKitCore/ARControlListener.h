@class NSString, NSXPCListener, NSXPCListenerEndpoint;
@protocol ARControlListenerDelegate;

@interface ARControlListener : NSObject <NSXPCListenerDelegate> {
    NSXPCListener *_listener;
}

@property (weak, nonatomic) id<ARControlListenerDelegate> delegate;
@property (readonly) NSXPCListenerEndpoint *endpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
