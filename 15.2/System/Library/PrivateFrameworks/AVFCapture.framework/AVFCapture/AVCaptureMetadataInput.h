@class AVCaptureMetadataInputInternal;

@interface AVCaptureMetadataInput : AVCaptureInput {
    AVCaptureMetadataInputInternal *_internal;
}

+ (void)initialize;
+ (id)metadataInputWithFormatDescription:(struct opaqueCMFormatDescription { } *)a0 clock:(struct OpaqueCMClock { } *)a1;

- (struct OpaqueCMClock { } *)clock;
- (id)init;
- (id)sourceID;
- (id)ports;
- (void)dealloc;
- (id)initWithFormatDescription:(struct opaqueCMFormatDescription { } *)a0 clock:(struct OpaqueCMClock { } *)a1;
- (BOOL)appendTimedMetadataGroup:(id)a0 error:(id *)a1;

@end
