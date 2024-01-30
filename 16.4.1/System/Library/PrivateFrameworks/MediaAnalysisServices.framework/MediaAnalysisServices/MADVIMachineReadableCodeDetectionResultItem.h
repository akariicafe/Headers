@class NSString, CIBarcodeDescriptor;

@interface MADVIMachineReadableCodeDetectionResultItem : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct CGPoint { double x; double y; } topLeft;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } topRight;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } bottomLeft;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } bottomRight;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } normalizedBoundingBox;
@property (readonly, nonatomic) NSString *symbology;
@property (readonly, nonatomic) NSString *payload;
@property (readonly, nonatomic) CIBarcodeDescriptor *descriptor;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithTopLeft:(struct CGPoint { double x0; double x1; })a0 topRight:(struct CGPoint { double x0; double x1; })a1 bottomLeft:(struct CGPoint { double x0; double x1; })a2 bottomRight:(struct CGPoint { double x0; double x1; })a3 symbology:(id)a4 payload:(id)a5 andDescriptor:(id)a6;

@end
