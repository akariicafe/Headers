@interface CSAudioZeroFilter : NSObject {
    struct unique_ptr<CSAudioZeroFilterImpl<unsigned short>, std::__1::default_delete<CSAudioZeroFilterImpl<unsigned short> > > { struct __compressed_pair<CSAudioZeroFilterImpl<unsigned short> *, std::__1::default_delete<CSAudioZeroFilterImpl<unsigned short> > > { struct CSAudioZeroFilterImpl<unsigned short> *__value_; } __ptr_; } _audioZeroFilterImpl;
}

- (void).cxx_destruct;
- (id)metrics;
- (id).cxx_construct;
- (id)initWithZeroWindowSize:(unsigned long long)a0 approxAbsSpeechThreshold:(unsigned short)a1 numHostTicksPerAudioSample:(double)a2;
- (unsigned long long)filterZerosInAudioPacket:(id)a0 atBufferHostTime:(unsigned long long)a1 filteredPacket:(id *)a2;
- (unsigned long long)endAudioAndFetchAnyTrailingZerosPacket:(id *)a0;

@end
