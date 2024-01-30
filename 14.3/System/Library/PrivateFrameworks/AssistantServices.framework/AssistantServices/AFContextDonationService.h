@class NSString, NSMapTable, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface AFContextDonationService : NSObject <AFContextDonation> {
    NSMapTable *_transformersByType;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultService;

- (void).cxx_destruct;
- (id)_init;
- (id)_connection;
- (void)_clearConnection;
- (void)registerContextTransformer:(id)a0 forType:(id)a1;
- (void)donateContext:(id)a0 withMetadata:(id)a1 pushToRemote:(BOOL)a2;

@end
