@class NSError;

@interface SFSSTTSEngineCallbackResult : NSObject {
    struct vector<unsigned char, std::__1::allocator<unsigned char> > { char *__begin_; char *__end_; struct __compressed_pair<unsigned char *, std::__1::allocator<unsigned char> > { char *__value_; } __end_cap_; } _pcmDataBuffer;
    struct vector<TTSSynthesizer::Marker, std::__1::allocator<TTSSynthesizer::Marker> > { struct Marker *__begin_; struct Marker *__end_; struct __compressed_pair<TTSSynthesizer::Marker *, std::__1::allocator<TTSSynthesizer::Marker> > { struct Marker *__value_; } __end_cap_; } _marker;
}

@property (copy, nonatomic) id /* block */ beginCallback;
@property (copy, nonatomic) id /* block */ chunkCallback;
@property (copy, nonatomic) id /* block */ endCallback;
@property (nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } asbd;
@property (readonly, nonatomic) NSError *error;

- (void).cxx_destruct;
- (struct vector<TTSSynthesizer::Marker, std::__1::allocator<TTSSynthesizer::Marker> > { struct Marker *x0; struct Marker *x1; struct __compressed_pair<TTSSynthesizer::Marker *, std::__1::allocator<TTSSynthesizer::Marker> > { struct Marker *x0; } x2; } *)marker;
- (id).cxx_construct;
- (id)pcmData;
- (int)synthesisCallback:(int)a0;
- (id)initWithBeginCallback:(id /* block */)a0 chunkCallback:(id /* block */)a1 endCallback:(id /* block */)a2;
- (struct vector<unsigned char, std::__1::allocator<unsigned char> > { char *x0; char *x1; struct __compressed_pair<unsigned char *, std::__1::allocator<unsigned char> > { char *x0; } x2; } *)pcmDataBuffer;

@end
