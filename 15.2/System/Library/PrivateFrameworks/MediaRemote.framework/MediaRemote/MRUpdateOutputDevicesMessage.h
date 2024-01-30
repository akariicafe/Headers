@class NSArray;

@interface MRUpdateOutputDevicesMessage : MRProtocolMessage {
    NSArray *_outputDevices;
}

@property (readonly, nonatomic) NSArray *outputDevices;

- (void).cxx_destruct;
- (id)initWithOutputDevices:(id)a0;
- (unsigned long long)type;

@end
