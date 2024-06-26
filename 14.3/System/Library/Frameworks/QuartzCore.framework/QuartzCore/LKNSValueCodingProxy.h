@interface LKNSValueCodingProxy : CACodingProxy {
    int _kind;
    union { struct CGPoint { double x; double y; } point; struct CGSize { double width; double height; } size; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect; struct CATransform3D { double m11; double m12; double m13; double m14; double m21; double m22; double m23; double m24; double m31; double m32; double m33; double m34; double m41; double m42; double m43; double m44; } transform; struct CAPoint3D { double x; double y; double z; } point3d; struct CAColorMatrix { float m11; float m12; float m13; float m14; float m15; float m21; float m22; float m23; float m24; float m25; float m31; float m32; float m33; float m34; float m35; float m41; float m42; float m43; float m44; float m45; } color_matrix; struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } affine_transform; } _u;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithObject:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)decodedObject;
- (void)encodeWithCoder:(id)a0;

@end
