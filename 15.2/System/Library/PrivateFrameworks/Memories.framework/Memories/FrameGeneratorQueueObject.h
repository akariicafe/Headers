@class AVAssetImageGenerator, NSArray;

@interface FrameGeneratorQueueObject : NSObject

@property (retain, nonatomic) AVAssetImageGenerator *generator;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) NSArray *times;

+ (id)queueObjectForGenerator:(id)a0 withTimes:(id)a1 completionBlock:(id /* block */)a2;

- (id)description;
- (void)dealloc;

@end
