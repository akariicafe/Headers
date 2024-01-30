@class NSMutableArray;

@interface TSKLayerPool : NSObject {
    NSMutableArray *mLayerPool;
}

@property (nonatomic) id layerDelegate;
@property (nonatomic) Class layerClass;

- (id)init;
- (void)dealloc;
- (id)requestLayerFromPool;
- (void)returnLayerToPool:(id)a0;

@end
