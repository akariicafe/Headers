@interface NUVideoHDRMetadataGenerator : NSObject {
    struct CGSize { double width; double height; } _sessionBufferSize;
    struct OpaqueVTHDRMetadataGenerationSession { } *_hdrMetadataSession;
    struct opaqueVTHDRImageStatisticsGenerationSession { } *_hdrImageStatisticsSession;
}

+ (void)resetHDRMetadataForBuffer:(struct __CVBuffer { } *)a0;

- (void)dealloc;
- (void)releaseSessions;
- (int)allocateSessions;
- (int)attachGeneratedHDRMetadataToBuffer:(struct __CVBuffer { } *)a0 framesPerSecond:(float)a1 playbackRate:(float)a2;

@end
