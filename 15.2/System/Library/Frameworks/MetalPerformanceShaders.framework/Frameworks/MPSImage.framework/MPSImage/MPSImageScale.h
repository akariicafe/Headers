@interface MPSImageScale : MPSUnaryImageKernel {
    struct MPSScaleTransform { double scaleX; double scaleY; double translateX; double translateY; } _transformStorage;
}

@property (nonatomic) struct MPSScaleTransform { double x0; double x1; double x2; double x3; } *scaleTransform;

- (id)initWithDevice:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0 device:(id)a1;
- (id)initWithCoder:(id)a0 device:(id)a1;

@end
