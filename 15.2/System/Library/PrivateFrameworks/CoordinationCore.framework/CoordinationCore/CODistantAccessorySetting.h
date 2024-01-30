@class NSUUID, NSString;
@protocol NSObject, NSSecureCoding, NSCopying;

@interface CODistantAccessorySetting : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) id<NSObject, NSCopying, NSSecureCoding> value;
@property (readonly, copy, nonatomic) NSUUID *accessoryUniqueIdentifier;
@property (readonly, nonatomic, getter=isWritable) BOOL writable;
@property (readonly, copy, nonatomic) NSString *keyPath;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAccessorySetting:(id)a0 accessory:(id)a1;

@end
