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

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)initWithServer:(id)a0;
- (void)setSlotWithName:(id)a0 endpoint:(id)a1 type:(id)a2 reply:(id /* block */)a3;
- (void)getSlotWithName:(id)a0 reply:(id /* block */)a1;
- (id)slotNamed:(id)a0;

@end
