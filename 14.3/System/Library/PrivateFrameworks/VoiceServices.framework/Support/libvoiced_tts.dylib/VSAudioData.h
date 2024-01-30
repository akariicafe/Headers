@class NSMutableData, NSData;

@interface VSAudioData : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableData *mutableAudioData;
@property (retain, nonatomic) NSMutableData *mutableDescription;
@property (retain, nonatomic) NSData *audioData;
@property (nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } asbd;
@property (nonatomic) long long packetCount;
@property (retain, nonatomic) NSData *packetDescriptions;

+ (id)audioDataFromPresynthesisRequest:(id)a0;
+ (id)audioDataFromFile:(id)a0 error:(id *)a1;
+ (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })asbdFromDescription:(id)a0;
+ (id)audioDataWithASBD:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a0 rawData:(id)a1;
+ (id)audioDataFromSAUIAudioData:(id)a0;
+ (id)pcmAudioDataFromOpusAudio:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)duration;
- (void)concatenateWithAudio:(id)a0;
- (BOOL)writeToFilePath:(id)a0;
- (unsigned int)totalFrames;
- (BOOL)populateWithPCMData:(id)a0;
- (BOOL)populateWithOpusData:(id)a0;
- (BOOL)populatePCMDataWithSiriOpusSData:(id)a0 withOpusASBD:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a1;

@end
