@interface AFBluetoothHeadphoneInEarDetectionState : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isEnabled;
@property (readonly, nonatomic) long long primaryEarbudSide;
@property (readonly, nonatomic) long long primaryInEarStatus;
@property (readonly, nonatomic) long long secondaryInEarStatus;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)initWithIsEnabled:(BOOL)a0 primaryEarbudSide:(long long)a1 primaryInEarStatus:(long long)a2 secondaryInEarStatus:(long long)a3;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
