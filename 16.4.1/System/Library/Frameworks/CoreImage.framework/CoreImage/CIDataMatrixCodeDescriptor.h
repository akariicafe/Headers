@class NSData;

@interface CIDataMatrixCodeDescriptor : CIBarcodeDescriptor

@property (readonly) NSData *errorCorrectedPayload;
@property (readonly) long long rowCount;
@property (readonly) long long columnCount;
@property (readonly) long long eccVersion;

+ (BOOL)supportsSecureCoding;
+ (id)descriptorWithPayload:(id)a0 rowCount:(long long)a1 columnCount:(long long)a2 eccVersion:(long long)a3;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithPayload:(id)a0 rowCount:(long long)a1 columnCount:(long long)a2 eccVersion:(long long)a3;

@end
