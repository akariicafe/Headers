@class NSString;
@protocol MTLTexture;

@interface RawDFDownsampleRequest : NSObject

@property (nonatomic) unsigned long long downsampleLevel;
@property (nonatomic) int outputType;
@property (retain, nonatomic) NSString *outputTexLabel;
@property (retain, nonatomic) id<MTLTexture> outputTex;

- (void)dealloc;
- (void).cxx_destruct;
- (void)releaseOutputTexture;

@end
