@class NSMutableData;

@interface AVMIDISysexEvent : AVMusicEvent {
    NSMutableData *_sysexData;
}

@property (readonly) struct MIDIRawData { unsigned int x0; unsigned char x1[1]; } *rawData;
@property (readonly) unsigned int sizeInBytes;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)initWithMIDIRawData:(struct MIDIRawData { unsigned int x0; unsigned char x1[1]; } *)a0;

@end
