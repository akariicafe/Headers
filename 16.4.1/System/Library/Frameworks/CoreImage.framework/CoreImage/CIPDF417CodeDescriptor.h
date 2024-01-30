@class NSData;

@interface CIPDF417CodeDescriptor : CIBarcodeDescriptor

@property (readonly) NSData *errorCorrectedPayload;
@property (readonly) BOOL isCompact;
@property (readonly) long long rowCount;
@property (readonly) long long columnCount;

+ (BOOL)supportsSecureCoding;
+ (id)descriptorWithPayload:(id)a0 isCompact:(BOOL)a1 rowCount:(long long)a2 columnCount:(long long)a3;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isValid;
- (void)dealloc;
- (id)initWithPayload:(id)a0 isCompact:(BOOL)a1 rowCount:(long long)a2 columnCount:(long long)a3;

@end
