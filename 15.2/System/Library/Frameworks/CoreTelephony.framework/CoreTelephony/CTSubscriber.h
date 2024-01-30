@class NSString, NSData, CoreTelephonyClient, CTServiceDescriptor;
@protocol CTSubscriberDelegate;

@interface CTSubscriber : NSObject <CoreTelephonyClientSubscriberDelegateInternal> {
    struct queue { struct object { struct dispatch_object_s *fObj; } fObj; } _queue;
    CoreTelephonyClient *_client;
}

@property (retain, nonatomic) CTServiceDescriptor *descriptor;
@property (readonly, retain, nonatomic) NSData *carrierToken;
@property (readonly, nonatomic) NSString *identifier;
@property (weak, nonatomic) id<CTSubscriberDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)carrierToken;
- (void)authTokenChanged:(id)a0;
- (void)authenticateWithInfo:(id)a0 handleResult:(id /* block */)a1;
- (id)initWithDescriptor:(id)a0 client:(id)a1;
- (id)typeAllocationCode;
- (void)authenticate:(id)a0 completion:(id /* block */)a1;
- (BOOL)refreshCarrierToken;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDescriptor:(id)a0;
- (id).cxx_construct;

@end
