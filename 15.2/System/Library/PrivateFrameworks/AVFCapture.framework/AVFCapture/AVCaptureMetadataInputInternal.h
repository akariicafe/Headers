@class AVCaptureInputPort, NSString;

@interface AVCaptureMetadataInputInternal : NSObject {
    AVCaptureInputPort *metadataPort;
    NSString *sourceID;
    struct opaqueCMFormatDescription { } *desc;
    struct OpaqueCMClock { } *clock;
    struct OpaqueCMBlockBuffer { } *emptyBoxedMetadata;
}

@end
