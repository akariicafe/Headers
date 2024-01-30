@class NSData, NSArray;

@interface _LTAudioData : NSObject {
    NSData *_data;
}

@property (readonly, nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } asbd;
@property (readonly, nonatomic) NSData *rawData;
@property (readonly, nonatomic) long long packetCount;
@property (readonly, nonatomic) NSData *packetDescriptions;
@property (readonly, nonatomic) NSArray *wordTimingInfo;

- (void)writeToURL:(id)a0;
- (void).cxx_destruct;
- (BOOL)_populateWithOpusData:(id)a0;
- (id)initWithASBD:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a0 rawData:(id)a1 wordTimingInfo:(id)a2;

@end
