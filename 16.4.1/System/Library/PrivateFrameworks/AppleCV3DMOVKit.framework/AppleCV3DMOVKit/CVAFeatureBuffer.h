@class NSData, NSString;

@interface CVAFeatureBuffer : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL compressed;
@property (nonatomic) BOOL reduce;
@property (nonatomic) struct __CVBuffer { } *pixelBufferRef;
@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned long long height;
@property (nonatomic) unsigned long long bytesPerRow;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) double timestamp;
@property (nonatomic) unsigned long long syncTimestamp;
@property (retain, nonatomic) NSString *sourceStreamID;
@property (nonatomic) unsigned long long frameId;

+ (id)classes;
+ (id)streamName:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (struct __CVBuffer { } *)getPixelBuffer;
- (id)initWithPixelBufferRef:(struct __CVBuffer { } *)a0 timestamp:(double)a1 streamID:(id)a2;
- (id)initWithPixelBufferRef:(struct __CVBuffer { } *)a0 timestamp:(double)a1 streamID:(id)a2 reduce:(BOOL)a3 compress:(BOOL)a4;
- (id)reduceBuffer:(void *)a0;
- (BOOL)shouldReduce:(void *)a0;

@end
