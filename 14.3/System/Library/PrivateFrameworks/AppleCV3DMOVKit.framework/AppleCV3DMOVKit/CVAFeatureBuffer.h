@class NSData, NSString;

@interface CVAFeatureBuffer : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double timestamp;
@property (nonatomic) unsigned int width;
@property (nonatomic) unsigned int height;
@property (nonatomic) unsigned int bytesPerRow;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSString *sourceStreamID;

+ (id)classes;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithPixelBufferRef:(struct __CVBuffer { } *)a0 timestamp:(double)a1 streamID:(id)a2;
- (struct __CVBuffer { } *)getPixelBuffer;

@end
