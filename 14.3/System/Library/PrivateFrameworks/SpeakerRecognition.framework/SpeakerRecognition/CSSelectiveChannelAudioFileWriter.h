@class NSURL, NSString, NSArray;

@interface CSSelectiveChannelAudioFileWriter : NSObject <CSAudioFileWriter> {
    BOOL isWriting;
    struct OpaqueExtAudioFile { } *fFile;
    struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } inASBD;
    struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } outASBD;
    NSArray *selectedChannelList;
}

@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) unsigned int numberOfChannels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)endAudio;
- (BOOL)addSamples:(const void *)a0 numSamples:(long long)a1;
- (id)initWithURL:(id)a0 inputFormat:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a1 outputFormat:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a2 channelBitset:(unsigned long long)a3;

@end
