@class NSUUID, HMAccessoryCollectionSetting, NSData, HMFUnfairLock;
@protocol NSObject, NSSecureCoding, NSCopying;

@interface HMAccessoryCollectionSettingItem : NSObject <NSCopying, NSSecureCoding> {
    HMFUnfairLock *_lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak) HMAccessoryCollectionSetting *setting;
@property (readonly) NSData *serializedValue;
@property (readonly, copy) NSUUID *identifier;
@property (readonly, copy) id<NSObject, NSCopying, NSSecureCoding> value;

+ (id)shortDescription;

- (id)descriptionWithPointer:(BOOL)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)shortDescription;
- (id)initWithIdentifier:(id)a0 value:(id)a1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithValue:(id)a0;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;

@end
