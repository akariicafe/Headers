@interface _UIHostedWindowHostingHandle : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) unsigned int contextID;
@property (readonly, nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } rootLayerTransform;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rootLayerFrame;

+ (id)hostedWindowHostingHandleWithContextID:(unsigned int)a0 rootLayerTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 rootLayerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
