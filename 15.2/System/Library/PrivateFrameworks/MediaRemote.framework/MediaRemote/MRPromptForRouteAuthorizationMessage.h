@class MRAVOutputDevice;

@interface MRPromptForRouteAuthorizationMessage : MRProtocolMessage {
    MRAVOutputDevice *_route;
}

@property (readonly, nonatomic) MRAVOutputDevice *route;
@property (readonly, nonatomic) long long inputType;

- (id)initWithRoute:(id)a0 inputType:(long long)a1;
- (void).cxx_destruct;
- (unsigned long long)type;

@end
