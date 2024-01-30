@class NSString, SVXAudioStreamBasicDescription;

@interface _SVXAudioStreamBasicDescriptionMutation : NSObject <SVXAudioStreamBasicDescriptionMutating> {
    SVXAudioStreamBasicDescription *_baseModel;
    double _sampleRate;
    unsigned int _formatID;
    unsigned int _formatFlags;
    unsigned int _bytesPerPacket;
    unsigned int _framesPerPacket;
    unsigned int _bytesPerFrame;
    unsigned int _channelsPerFrame;
    unsigned int _bitsPerChannel;
    unsigned int _reserved;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasSampleRate : 1; unsigned char hasFormatID : 1; unsigned char hasFormatFlags : 1; unsigned char hasBytesPerPacket : 1; unsigned char hasFramesPerPacket : 1; unsigned char hasBytesPerFrame : 1; unsigned char hasChannelsPerFrame : 1; unsigned char hasBitsPerChannel : 1; unsigned char hasReserved : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)generate;
- (void)setReserved:(unsigned int)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setSampleRate:(double)a0;
- (void)setFormatID:(unsigned int)a0;
- (id)initWithBaseModel:(id)a0;
- (void)setBytesPerFrame:(unsigned int)a0;
- (void)setFormatFlags:(unsigned int)a0;
- (void)setBitsPerChannel:(unsigned int)a0;
- (void)setBytesPerPacket:(unsigned int)a0;
- (void)setChannelsPerFrame:(unsigned int)a0;
- (void)setFramesPerPacket:(unsigned int)a0;

@end
