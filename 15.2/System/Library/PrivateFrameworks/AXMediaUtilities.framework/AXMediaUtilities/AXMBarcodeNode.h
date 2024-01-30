@class AVCaptureMetadataOutput;

@interface AXMBarcodeNode : AXMEvaluationNode <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) AVCaptureMetadataOutput *captureOutput;

+ (id)title;
+ (BOOL)isSupported;

- (void).cxx_destruct;

@end
