@class SPCBPeripheralManagerSessionKey, NSArray;

@interface SPCBPeripheralKeyRequestParameters : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) SPCBPeripheralManagerSessionKey *sessionKey;
@property (readonly, copy, nonatomic) NSArray *vendorIdentifierList;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSessionKey:(id)a0 vendorIdentifierList:(id)a1;
- (void).cxx_destruct;

@end
