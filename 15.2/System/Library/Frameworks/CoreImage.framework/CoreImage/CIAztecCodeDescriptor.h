@class NSData;

@interface CIAztecCodeDescriptor : CIBarcodeDescriptor

@property (readonly) NSData *errorCorrectedPayload;
@property (readonly) BOOL isCompact;
@property (readonly) long long layerCount;
@property (readonly) long long dataCodewordCount;

+ (BOOL)supportsSecureCoding;
+ (id)descriptorWithPayload:(id)a0 isCompact:(BOOL)a1 layerCount:(long long)a2 dataCodewordCount:(long long)a3;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPayload:(id)a0 isCompact:(BOOL)a1 layerCount:(long long)a2 dataCodewordCount:(long long)a3;
- (void)dealloc;
- (BOOL)isValid;

@end
