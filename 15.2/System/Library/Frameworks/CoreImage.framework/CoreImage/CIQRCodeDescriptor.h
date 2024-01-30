@class NSData;

@interface CIQRCodeDescriptor : CIBarcodeDescriptor

@property (readonly) NSData *errorCorrectedPayload;
@property (readonly) long long symbolVersion;
@property (readonly) unsigned char maskPattern;
@property (readonly) long long errorCorrectionLevel;

+ (BOOL)supportsSecureCoding;
+ (id)descriptorWithPayload:(id)a0 symbolVersion:(long long)a1 maskPattern:(unsigned char)a2 errorCorrectionLevel:(long long)a3;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPayload:(id)a0 symbolVersion:(long long)a1 maskPattern:(unsigned char)a2 errorCorrectionLevel:(long long)a3;
- (void)dealloc;
- (BOOL)isValid;

@end
