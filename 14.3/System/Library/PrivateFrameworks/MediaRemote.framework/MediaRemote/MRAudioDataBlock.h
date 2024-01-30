@class _MRAudioDataBlockProtobuf, NSData, MRAudioBuffer;

@interface MRAudioDataBlock : NSObject <NSMutableCopying>

@property (readonly, nonatomic) MRAudioBuffer *buffer;
@property (readonly, nonatomic) struct { double timestamp; double sampleRate; } time;
@property (readonly, nonatomic) float gain;
@property (readonly, nonatomic) _MRAudioDataBlockProtobuf *protobuf;
@property (readonly, nonatomic) NSData *data;

- (void)_parseBuffer:(id)a0;
- (void)_parseTimestamp:(id)a0;
- (void)_parseGain:(id)a0;
- (id)_copyWithZone:(struct _NSZone { } *)a0 usingConcreteClass:(Class)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithProtobuf:(id)a0;

@end
