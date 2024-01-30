@class NSDictionary;

@interface PTAssetReaderFrame : NSObject

@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } time;
@property (nonatomic) unsigned long long index;
@property (retain, nonatomic) NSDictionary *metadata;
@property (retain, nonatomic) NSDictionary *jsonFriendlyMetadata;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } metadataTime;
@property (nonatomic) struct __CVBuffer { } *colorBuffer;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } colorBufferTime;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } colorBufferPreferredTransform;
@property (nonatomic) struct __CVBuffer { } *disparityBuffer;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } disparityBufferTime;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } disparityBufferPreferredTransform;

- (void).cxx_destruct;
- (void)dealloc;
- (id)_jsonFriendlyObject:(id)a0;

@end
