@interface PIZlibDataCompressionOptions : NSObject

@property (nonatomic) int compressionLevel;
@property (nonatomic) int strategy;
@property (nonatomic) int windowBits;
@property (nonatomic) int memoryLevel;
@property (nonatomic) unsigned long long chunkSize;

+ (id)defaultOptions;

- (void)setCompressionStrategy:(int)a0;

@end
