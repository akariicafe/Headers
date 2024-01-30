@class NSData, NSString;

@interface HMIVideoFrame : HMFObject <HMIVideoEvent, HMFLogging, NSSecureCoding> {
    long long _store;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) struct __CVBuffer { } *pixelBuffer;
@property (readonly) NSData *data;
@property (readonly) struct CGSize { double width; double height; } size;
@property (readonly) struct { long long value; int timescale; unsigned int flags; long long epoch; } presentationTimeStamp;
@property (readonly) struct { long long x0; int x1; unsigned int x2; long long x3; } time;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)attributeDescriptions;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)compressedFrameWithScale:(double)a0 quality:(double)a1 error:(id *)a2;
- (id)base64Encoded;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0 presentationTimeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)printWithScale:(double)a0;
- (id)redactedCopy;
- (id)initWithJPEGData:(id)a0 size:(struct CGSize { double x0; double x1; })a1 presentationTimeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (id)pixelBufferFrameWithError:(id *)a0;
- (void)printWithHeight:(unsigned long long)a0;

@end
