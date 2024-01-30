@class MRAudioDataBlock, MRAudioBuffer;

@interface MRSendVoiceInputMessage : MRProtocolMessage {
    MRAudioDataBlock *_dataBlock;
}

@property (readonly, nonatomic) MRAudioBuffer *buffer;
@property (readonly, nonatomic) struct { double x0; double x1; } time;
@property (readonly, nonatomic) float gain;

- (void).cxx_destruct;
- (void)_initializeDataIfNecessary;
- (id)initWithBuffer:(id)a0 time:(struct { double x0; double x1; })a1 gain:(float)a2;
- (unsigned long long)type;

@end
