@class NSString, NSDictionary, NSData, CIBarcodeDescriptor, NSNumber;

@interface VNBarcodeObservation : VNRectangleObservation <VNDataDetectorSupporting> {
    NSString *_cachedPayloadStringValue;
    NSData *_cachedPayloadDataValue;
    NSNumber *_cachedAppClipCodeMetadataValue;
}

@property (copy, nonatomic, setter=setACBSBarcodeInfo:) NSDictionary *acbsBarcodeInfo;
@property (nonatomic, setter=setMRCDescriptor:) const struct __MRCDescriptor { } *mrcDescriptor;
@property (readonly, copy, nonatomic) NSData *payloadDataValue;
@property (readonly, copy, nonatomic) NSNumber *appClipCodeMetadataValue;
@property (readonly, copy, nonatomic) NSString *symbology;
@property (readonly, nonatomic) CIBarcodeDescriptor *barcodeDescriptor;
@property (readonly, copy, nonatomic) NSString *payloadStringValue;

+ (BOOL)supportsSecureCoding;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)a0;

- (id)getDataDetectorResults:(id *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)vn_cloneObject;
- (id)initWithOriginatingRequestSpecifier:(id)a0 symbology:(id)a1 descriptor:(id)a2 topLeft:(struct CGPoint { double x0; double x1; })a3 bottomLeft:(struct CGPoint { double x0; double x1; })a4 bottomRight:(struct CGPoint { double x0; double x1; })a5 topRight:(struct CGPoint { double x0; double x1; })a6;
- (id)initWithOriginatingRequestSpecifier:(id)a0 symbology:(id)a1 descriptor:(id)a2 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)setMrcDescriptor:(struct __MRCDescriptor { } *)a0;

@end
