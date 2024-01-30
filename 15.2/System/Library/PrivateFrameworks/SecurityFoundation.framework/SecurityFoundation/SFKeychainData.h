@class NSData, SFKeychainDataAttributes;

@interface SFKeychainData : NSObject <NSCopying, NSSecureCoding> {
    id _keychainDataInternal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSData *data;
@property (retain, nonatomic) SFKeychainDataAttributes *attributes;

- (void)encodeWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
