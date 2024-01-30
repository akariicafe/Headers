@class NSString, NSError, NSMutableArray;

@interface VSSpeechSynthesisCallbackResult : NSObject {
    struct vector<unsigned char, std::allocator<unsigned char>> { char *__begin_; char *__end_; struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { char *__value_; } __end_cap_; } _samples;
    struct vector<TTSSynthesizer::Marker, std::allocator<TTSSynthesizer::Marker>> { struct Marker *__begin_; struct Marker *__end_; struct __compressed_pair<TTSSynthesizer::Marker *, std::allocator<TTSSynthesizer::Marker>> { struct Marker *__value_; } __end_cap_; } _markers;
}

@property (retain, nonatomic) NSString *text;
@property (nonatomic) long long stopMark;
@property (copy, nonatomic) id /* block */ callback;
@property (nonatomic) long long state;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSMutableArray *wordTimings;
@property (nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } asbd;
@property (nonatomic) unsigned long long samplesProcessed;
@property (nonatomic) unsigned long long lastUTF8Offset;
@property (nonatomic) unsigned long long lastUTF16Offset;
@property (nonatomic) unsigned long long numOfPromptsTriggered;
@property (nonatomic) BOOL neuralDidFallback;
@property (nonatomic) BOOL hasAlignmentStall;
@property (nonatomic) BOOL hasAudioClick;

- (id)initWithCallback:(id /* block */)a0;
- (void).cxx_destruct;
- (id)phonemes;
- (id)pcmData;
- (id).cxx_construct;
- (void *)sampleBuffer;
- (id)mutablePCMData;
- (id)wordTimingInfos;
- (void)processMarkerBuffer;
- (unsigned long long)utf8BytesForChar:(unsigned short)a0;
- (unsigned long long)utf16OffsetFromUTF8:(unsigned long long)a0;
- (int)synthesisCallback:(int)a0;
- (void *)markerBuffer;

@end
