@class NSMutableArray;

@interface TSKLayerPool : NSObject {
    NSMutableArray *mLayerPool;
}

@property (nonatomic) id layerDelegate;
@property (nonatomic) Class layerClass;

- (void)dealloc;
- (id)init;
- (id)requestLayerFromPool;
- (void)returnLayerToPool:(id)a0;

@end
