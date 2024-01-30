@class NSUUID;
@protocol NSObject, NSSecureCoding, NSCopying;

@interface HMCollectionSettingItem : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSUUID *identifier;
@property (readonly, copy) id<NSObject, NSCopying, NSSecureCoding> value;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
