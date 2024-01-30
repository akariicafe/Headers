@class AVCaptureMetadataInputInternal;

@interface AVCaptureMetadataInput : AVCaptureInput {
    AVCaptureMetadataInputInternal *_internal;
}

+ (void)initialize;
+ (id)metadataInputWithFormatDescription:(struct opaqueCMFormatDescription { } *)a0 clock:(struct OpaqueCMClock { } *)a1;

- (id)ports;
- (struct OpaqueCMClock { } *)clock;
- (id)init;
- (void)dealloc;
- (id)sourceID;
- (id)initWithFormatDescription:(struct opaqueCMFormatDescription { } *)a0 clock:(struct OpaqueCMClock { } *)a1;
- (BOOL)appendTimedMetadataGroup:(id)a0 error:(id *)a1;

@end
