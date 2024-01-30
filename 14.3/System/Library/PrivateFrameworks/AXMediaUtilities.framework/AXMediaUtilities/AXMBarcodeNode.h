@class AVCaptureMetadataOutput;

@interface AXMBarcodeNode : AXMEvaluationNode <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) AVCaptureMetadataOutput *captureOutput;

+ (BOOL)isSupported;
+ (id)title;

- (void).cxx_destruct;

@end
