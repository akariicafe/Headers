@class NSData, NSString;

@interface CVAFeatureBuffer : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL compressed;
@property (nonatomic) unsigned int width;
@property (nonatomic) unsigned int height;
@property (nonatomic) unsigned int bytesPerRow;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) double timestamp;
@property (retain, nonatomic) NSString *sourceStreamID;

+ (id)classes;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithPixelBufferRef:(struct __CVBuffer { } *)a0 timestamp:(double)a1 streamID:(id)a2;
- (struct __CVBuffer { } *)getPixelBuffer;
- (id)reduceBuffer:(void *)a0;

@end
