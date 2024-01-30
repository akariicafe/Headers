@interface PFZlibDataDecompressionOptions : NSObject

@property (nonatomic) int windowBits;
@property (copy, nonatomic) id /* block */ createBuffer;
@property (copy, nonatomic) id /* block */ growData;
@property (nonatomic) BOOL decompressAllAtOnce;

+ (id)defaultOptions;

- (void).cxx_destruct;

@end
