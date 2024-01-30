@class NSString;

@interface BRKAudioFileWriter : BRKWriter <BRKAudioWriter> {
    struct OpaqueExtAudioFile { } *_audioFile;
    struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } _format;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPath:(id)a0;
- (void)close;
- (void)_lock_close;
- (void)_lock_writeSamples:(const short *)a0 count:(unsigned long long)a1;
- (void)writeSamples:(const short *)a0 count:(unsigned long long)a1;

@end
