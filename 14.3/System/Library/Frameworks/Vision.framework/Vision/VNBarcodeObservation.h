@class NSDictionary, NSString, CIBarcodeDescriptor;

@interface VNBarcodeObservation : VNRectangleObservation {
    NSString *_cachedPayloadStringValue;
}

@property (copy, nonatomic, setter=setACBSBarcodeInfo:) NSDictionary *acbsBarcodeInfo;
@property (readonly, copy, nonatomic) NSString *symbology;
@property (readonly, nonatomic) CIBarcodeDescriptor *barcodeDescriptor;
@property (readonly, copy, nonatomic) NSString *payloadStringValue;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRequestRevision:(unsigned long long)a0 symbology:(id)a1 descriptor:(id)a2 topLeft:(struct CGPoint { double x0; double x1; })a3 bottomLeft:(struct CGPoint { double x0; double x1; })a4 bottomRight:(struct CGPoint { double x0; double x1; })a5 topRight:(struct CGPoint { double x0; double x1; })a6;
- (id)initWithRequestRevision:(unsigned long long)a0 symbology:(id)a1 descriptor:(id)a2 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
