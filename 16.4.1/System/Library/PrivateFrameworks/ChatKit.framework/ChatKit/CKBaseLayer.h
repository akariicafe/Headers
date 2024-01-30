@protocol CKLayerDelegate;

@interface CKBaseLayer : CALayer

@property (weak, nonatomic) id<CKLayerDelegate> ckLayerDelegate;

- (void)layerDidBecomeVisible:(BOOL)a0;
- (void).cxx_destruct;

@end
