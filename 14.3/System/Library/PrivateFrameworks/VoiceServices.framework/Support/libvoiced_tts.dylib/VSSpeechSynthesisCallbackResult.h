@class NSString, NSError, NSMutableArray;

@interface VSSpeechSynthesisCallbackResult : NSObject {
    struct vector<unsigned char, std::__1::allocator<unsigned char> > { char *__begin_; char *__end_; struct __compressed_pair<unsigned char *, std::__1::allocator<unsigned char> > { char *__value_; } __end_cap_; } _samples;
    struct vector<TTSSynthesizer::Marker, std::__1::allocator<TTSSynthesizer::Marker> > { struct Marker *__begin_; struct Marker *__end_; struct __compressed_pair<TTSSynthesizer::Marker *, std::__1::allocator<TTSSynthesizer::Marker> > { struct Marker *__value_; } __end_cap_; } _markers;
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

- (id)initWithCallback:(id /* block */)a0;
- (struct vector<unsigned char, std::__1::allocator<unsigned char> > { char *x0; char *x1; struct __compressed_pair<unsigned char *, std::__1::allocator<unsigned char> > { char *x0; } x2; } *)sampleBuffer;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)pcmData;
- (id)phonemes;
- (id)mutablePCMData;
- (id)wordTimingInfos;
- (void)processMarkerBuffer;
- (unsigned long long)utf8BytesForChar:(unsigned short)a0;
- (unsigned long long)utf16OffsetFromUTF8:(unsigned long long)a0;
- (int)synthesisCallback:(int)a0;
- (struct vector<TTSSynthesizer::Marker, std::__1::allocator<TTSSynthesizer::Marker> > { struct Marker *x0; struct Marker *x1; struct __compressed_pair<TTSSynthesizer::Marker *, std::__1::allocator<TTSSynthesizer::Marker> > { struct Marker *x0; } x2; } *)markerBuffer;

@end
