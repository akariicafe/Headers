@class NSArray, CIBarcodeDescriptor, NSString, AVMetadataMachineReadableCodeObjectInternal;

@interface AVMetadataMachineReadableCodeObject : AVMetadataObject {
    AVMetadataMachineReadableCodeObjectInternal *_internal;
}

@property (readonly) CIBarcodeDescriptor *descriptor;
@property (readonly) NSArray *corners;
@property (readonly) NSString *stringValue;

+ (id)machineReadableCodeObjectWithFigEmbeddedCaptureDeviceMachineReadableCodeDictionary:(id)a0 input:(id)a1;
+ (id)machineReadableCodeObjectWithAppClipCodeDictionary:(id)a0 input:(id)a1;

- (id)description;
- (void)dealloc;
- (id)initDerivedMetadataObjectFromMetadataObject:(id)a0 withTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 isVideoMirrored:(BOOL)a2 rollAdjustment:(double)a3;
- (id)basicDescriptor;
- (id)initWithFigEmbeddedCaptureDeviceMachineReadableCodeDictionary:(id)a0 input:(id)a1;
- (id)initWithAppClipCodeDictionary:(id)a0 input:(id)a1;

@end
