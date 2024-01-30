@interface HSFigCaptureDevice : HSCMBaseObject

@property (readonly, nonatomic) struct OpaqueFigCaptureDevice { } *underlyingDevice;

+ (id)statusDescription:(int)a0;

- (BOOL)invalidate:(id *)a0;
- (void)dealloc;
- (id)valueForKey:(id)a0;
- (id)initWithCaptureDevice:(struct OpaqueFigCaptureDevice { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToDevice:(id)a0;
- (id)valueForProperty:(struct __CFString { } *)a0 error:(id *)a1;
- (BOOL)setValue:(id)a0 forProperty:(struct __CFString { } *)a1 error:(id *)a2;
- (id)streams:(id *)a0;
- (BOOL)requestControlOfStreams:(id)a0 error:(id *)a1;
- (BOOL)relinquishControlOfStreams:(id)a0 error:(id *)a1;
- (id)synchronizedStreamsGroups:(id *)a0;

@end
