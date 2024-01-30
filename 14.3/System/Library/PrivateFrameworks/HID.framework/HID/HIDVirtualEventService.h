@class HIDEventSystemClient, NSObject, HIDServiceClient;
@protocol OS_dispatch_queue, HIDVirtualEventServiceDelegate;

@interface HIDVirtualEventService : NSObject

@property (retain) HIDEventSystemClient *client;
@property (retain) HIDServiceClient *serviceClient;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long serviceID;
@property (weak) id<HIDVirtualEventServiceDelegate> delegate;

- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (BOOL)dispatchEvent:(id)a0;
- (void)setCancelHandler:(id /* block */)a0;
- (id)description;
- (void)activate;
- (void)setDispatchQueue:(id)a0;

@end
