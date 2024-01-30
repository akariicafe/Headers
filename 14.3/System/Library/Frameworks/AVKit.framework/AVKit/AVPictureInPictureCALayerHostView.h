@class CALayerHost;

@interface AVPictureInPictureCALayerHostView : UIView

@property (readonly, nonatomic) CALayerHost *layer;

+ (Class)layerClass;

@end
