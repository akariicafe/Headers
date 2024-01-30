@class NSDictionary;

@interface JDTimestampedImage : NSObject

@property (readonly, nonatomic) struct __CVBuffer { } *image;
@property (readonly, nonatomic) NSDictionary *metadataDictionary;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } timestamp;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithImage:(struct __CVBuffer { } *)a0 andTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)initWithImage:(struct __CVBuffer { } *)a0 metadataDictionary:(id)a1 andTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;

@end
