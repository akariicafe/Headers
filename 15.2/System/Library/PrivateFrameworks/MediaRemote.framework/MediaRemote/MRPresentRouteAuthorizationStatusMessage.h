@class MRAVOutputDevice;

@interface MRPresentRouteAuthorizationStatusMessage : MRProtocolMessage {
    MRAVOutputDevice *_route;
}

@property (readonly, nonatomic) MRAVOutputDevice *route;
@property (readonly, nonatomic) int status;

- (id)initWithRoute:(id)a0 status:(int)a1;
- (void).cxx_destruct;
- (unsigned long long)type;

@end
