@interface WKLayerHostView : UIView

@property (nonatomic) unsigned int contextID;

+ (Class)layerClass;

- (id)layerHost;

@end
