@class BCULayerRenderer, CALayer, NSString;
@protocol BCUPurgeableImage;

@interface _BCULayerRendererOperation : NSObject <BCUOperation> {
    _Atomic long long _operationId;
    BOOL _cancelled;
    BOOL _configuring;
}

@property (retain, nonatomic) BCULayerRenderer *renderer;
@property (copy, nonatomic) id /* block */ layerBlock;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) CALayer *layer;
@property (retain, nonatomic) id<BCUPurgeableImage> result;
@property (readonly, nonatomic) BOOL waitForCPUSynchronization;
@property (nonatomic) float priority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)start;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancel;
- (id)initWithRenderer:(id)a0 priority:(float)a1 waitForCPUSynchronization:(BOOL)a2 layerBlock:(id /* block */)a3 completion:(id /* block */)a4;
- (id)configureLayer;
- (void)completeWithImage:(id)a0;
- (long long)_compareHoldingStateLock:(id)a0;

@end
