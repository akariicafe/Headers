@class NSArray, NSXPCConnection, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface TKSmartCardSlotManager : NSObject <TKProtocolSlotClientNotification> {
    NSXPCConnection *_connection;
    NSMutableDictionary *_endpoints;
    NSArray *_slotNames;
    NSObject<OS_dispatch_queue> *_slotNamesQueue;
}

@property (class, readonly) TKSmartCardSlotManager *defaultManager;

@property (readonly) NSArray *slotNames;

- (id)initWithServer:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setSlotWithName:(id)a0 endpoint:(id)a1 type:(id)a2 reply:(id /* block */)a3;
- (void)getSlotWithName:(id)a0 reply:(id /* block */)a1;
- (id)slotNamed:(id)a0;

@end
