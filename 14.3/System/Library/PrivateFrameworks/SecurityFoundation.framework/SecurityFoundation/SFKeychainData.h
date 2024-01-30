@class NSData, SFKeychainDataAttributes;

@interface SFKeychainData : NSObject <NSCopying, NSSecureCoding> {
    id _keychainDataInternal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSData *data;
@property (retain, nonatomic) SFKeychainDataAttributes *attributes;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
