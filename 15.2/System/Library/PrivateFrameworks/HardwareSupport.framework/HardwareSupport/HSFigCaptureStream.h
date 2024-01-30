@class HSFigCaptureDevice;

@interface HSFigCaptureStream : HSCMBaseObject

@property (readonly, nonatomic) struct OpaqueFigCaptureStream { } *underlyingStream;
@property (readonly, nonatomic) HSFigCaptureDevice *device;

+ (id)statusDescription:(int)a0;

- (BOOL)start:(id *)a0;
- (id)valueForKey:(id)a0;
- (id)description;
- (BOOL)stop:(id *)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqualToStream:(id)a0;
- (id)initWithCaptureStream:(struct OpaqueFigCaptureStream { } *)a0 fromDevice:(id)a1;

@end
