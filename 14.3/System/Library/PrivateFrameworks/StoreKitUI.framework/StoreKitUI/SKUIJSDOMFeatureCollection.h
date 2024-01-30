@protocol SKUIJSDOMFeatureCollectionAppBridge;

@interface SKUIJSDOMFeatureCollection : IKJSObject <SKUIJSDOMFeatureCollection>

@property (weak, nonatomic) id<SKUIJSDOMFeatureCollectionAppBridge> appBridge;

- (void).cxx_destruct;
- (void)setEditing:(BOOL)a0 :(id)a1;

@end
