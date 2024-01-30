@class NSMutableArray, NSMutableDictionary;

@interface BurstThumbnailCluster : NSObject

@property (retain) NSMutableArray *burstImages;
@property (retain) NSMutableDictionary *imageProps;
@property (copy) id /* block */ completionBlock;
@property struct __CVBuffer { } *imagePixelBuffer;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithImageData:(struct __CVBuffer { } *)a0 dict:(id)a1 identifier:(id)a2 imageProps:(id)a3 completionBlock:(id /* block */)a4;
- (void)addItemsFromCluster:(id)a0;
- (float)computeMergeCost:(id)a0 :(int *)a1 :(int)a2;

@end
