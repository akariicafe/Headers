@class CALayerHost;

@interface _UILayerHostView : _UIVisibilityPropagationView {
    int _pid;
    unsigned int _contextID;
}

@property (nonatomic) unsigned int contextID;
@property (nonatomic) BOOL inheritsSecurity;
@property (readonly, retain, nonatomic) CALayerHost *layerHost;

+ (Class)layerClass;

- (void)setPid:(int)a0 contextID:(unsigned int)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pid:(int)a1 contextID:(unsigned int)a2;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
