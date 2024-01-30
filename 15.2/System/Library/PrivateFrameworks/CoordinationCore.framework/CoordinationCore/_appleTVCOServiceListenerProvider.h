@class NSXPCListener, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface _appleTVCOServiceListenerProvider : NSObject <COServiceListenerProvider>

@property (readonly, copy, nonatomic) NSXPCListener *listener;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
