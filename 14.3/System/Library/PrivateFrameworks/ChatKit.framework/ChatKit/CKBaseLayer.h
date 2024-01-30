@protocol CKLayerDelegate;

@interface CKBaseLayer : CALayer

@property (weak, nonatomic) id<CKLayerDelegate> ckLayerDelegate;

- (void).cxx_destruct;
- (void)layerDidBecomeVisible:(BOOL)a0;

@end
