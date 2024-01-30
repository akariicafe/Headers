@class NSString, NSXPCListener;
@protocol ARControlListenerDelegate;

@interface ARControlListener : NSObject <NSXPCListenerDelegate> {
    NSXPCListener *_listener;
}

@property (weak, nonatomic) id<ARControlListenerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
