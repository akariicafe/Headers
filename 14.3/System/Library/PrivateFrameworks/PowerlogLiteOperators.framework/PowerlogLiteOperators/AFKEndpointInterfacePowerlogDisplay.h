@class PLIOKitOperatorComposition;

@interface AFKEndpointInterfacePowerlogDisplay : AFKEndpointInterface {
    unsigned int _notification;
}

@property BOOL valid;
@property (weak) PLIOKitOperatorComposition *comp;

- (void)cancel;
- (void).cxx_destruct;
- (id)initWithService:(unsigned int)a0 andIOKitComposition:(id)a1;

@end
