@class NSUUID, NSString, NSArray, NSDictionary;

@interface AFServiceDeviceContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSString *mediaSystemIdentifier;
@property (readonly, copy, nonatomic) NSString *mediaRouteIdentifier;
@property (readonly, copy, nonatomic) NSString *roomName;
@property (readonly, nonatomic) long long proximity;
@property (readonly, copy, nonatomic) NSArray *contextSnapshots;
@property (readonly, copy, nonatomic) NSDictionary *serializedContextByKey;
@property (readonly, copy, nonatomic) NSDictionary *metricsContext;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)_descriptionWithIndent:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0 mediaSystemIdentifier:(id)a1 mediaRouteIdentifier:(id)a2 roomName:(id)a3 proximity:(long long)a4 contextSnapshots:(id)a5 serializedContextByKey:(id)a6 metricsContext:(id)a7;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
