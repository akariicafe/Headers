@class NSArray;

@interface MRSyncOutputDevicesMessage : MRProtocolMessage {
    NSArray *_outputDevices;
}

@property (readonly, nonatomic) NSArray *outputDevices;

- (id)initWithOutputDevices:(id)a0;
- (unsigned long long)type;
- (void).cxx_destruct;

@end
