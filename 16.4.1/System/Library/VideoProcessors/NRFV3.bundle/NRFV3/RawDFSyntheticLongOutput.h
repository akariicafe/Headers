@protocol MTLTexture;

@interface RawDFSyntheticLongOutput : NSObject

@property (retain, nonatomic) id<MTLTexture> outputSyntheticLong;
@property (retain, nonatomic) id<MTLTexture> noiseDivisorSyntheticEV0;
@property (retain, nonatomic) id<MTLTexture> noiseDivisorSyntheticLong;
@property (nonatomic) unsigned long long ev0Count;

- (void).cxx_destruct;

@end
