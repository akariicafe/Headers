@class MRAVOutputDevice;

@interface MRPresentRouteAuthorizationStatusMessage : MRProtocolMessage {
    MRAVOutputDevice *_route;
}

@property (readonly, nonatomic) MRAVOutputDevice *route;
@property (readonly, nonatomic) int status;

- (unsigned long long)type;
- (void).cxx_destruct;
- (id)initWithRoute:(id)a0 status:(int)a1;

@end
