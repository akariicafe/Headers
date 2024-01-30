@class CALayer;

@interface _ExplorerDotLayer : CATransformLayer

@property (readonly, nonatomic) CALayer *noServicePillLayer;
@property (readonly, nonatomic) CALayer *connectivityDotBackingLayer;
@property (readonly, nonatomic) CALayer *connectivityDotLayer;

- (id)init;
- (void).cxx_destruct;
- (void)layoutSublayers;

@end
