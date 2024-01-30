@class NSDictionary, NSString;

@interface TUNearbyDeviceHandle : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *knownIdentifiersByHandleType;
@property (readonly, nonatomic) NSDictionary *plistRepresentation;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) long long deviceModel;

- (id)initWithType:(long long)a0 identifier:(id)a1 name:(id)a2;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)identifierDescription;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)identifierWithType:(long long)a0;
- (id)initWithName:(id)a0 knownIdentifiers:(id)a1 deviceModel:(long long)a2;
- (id)initWithName:(id)a0 knownIdentifiers:(id)a1;
- (BOOL)isEquivalentToDeviceHandle:(id)a0;
- (BOOL)isEqualToDeviceHandle:(id)a0;

@end
