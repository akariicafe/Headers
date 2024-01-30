@class MRAVOutputDevice;

@interface MRPromptForRouteAuthorizationMessage : MRProtocolMessage {
    MRAVOutputDevice *_route;
}

@property (readonly, nonatomic) MRAVOutputDevice *route;
@property (readonly, nonatomic) long long inputType;

- (unsigned long long)type;
- (void).cxx_destruct;
- (id)initWithRoute:(id)a0 inputType:(long long)a1;

@end
