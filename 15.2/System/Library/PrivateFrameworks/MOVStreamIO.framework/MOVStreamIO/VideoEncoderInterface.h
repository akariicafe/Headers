@class NSString, MOVStreamEncoderConfig;
@protocol VideoEncoderInterfaceDelegate;

@interface VideoEncoderInterface : NSObject <EncoderConfigDelegate> {
    struct HEVCLosslessEncoder { id x0; int x1; int x2; double x3; struct OpaqueVTCompressionSession *x4; struct EncoderConfig { int x0; int x1; int x2; int x3; double x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; int x10; } x5; struct { long long x0; int x1; unsigned int x2; long long x3; } x6; unsigned int x7; unsigned int x8; unsigned int x9; BOOL x10; BOOL x11; } *m_encoder;
    BOOL m_encoderInitialized;
    double m_expectedFrameRate;
    int m_qpValue;
    NSString *m_stream;
    id<VideoEncoderInterfaceDelegate> m_delegate;
    MOVStreamEncoderConfig *m_config;
}

@property long long pendigFrames;
@property (readonly) unsigned int lastEncodingStatus;
@property (readonly) unsigned int lastEncodingInfoFlags;
@property (readonly) BOOL frameReorderingEnabled;
@property BOOL customEncoderConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct __CVBuffer { } *)createHEVCCompatiblePixelBuffer:(struct __CVBuffer { } *)a0;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)setupEncoderWithWidth:(int)a0 andHeight:(int)a1 imageFormat:(int)a2 andFramerate:(double)a3;
- (void)closeEncoder;
- (void)encodeFrame:(struct __CVBuffer { } *)a0 pst:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 frameProperties:(struct __CFDictionary { } *)a2 metadata:(id)a3;
- (id)initForStream:(id)a0 configuration:(id)a1 delegate:(id)a2;
- (id)initWithExpectedFrameRate:(double)a0 forStream:(id)a1 delegate:(id)a2;
- (id)overrideVideoEncoderSpecification;
- (unsigned int)codecTypeOverride;
- (BOOL)configureSessionOverride:(struct OpaqueVTCompressionSession { } *)a0;
- (void)writeSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 pts:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 metadata:(id)a2 withStatus:(int)a3 andFlags:(unsigned int)a4;
- (void)skipFrameWithStatus:(int)a0 andFlags:(unsigned int)a1;
- (void)useQPEncoding:(int)a0;

@end
