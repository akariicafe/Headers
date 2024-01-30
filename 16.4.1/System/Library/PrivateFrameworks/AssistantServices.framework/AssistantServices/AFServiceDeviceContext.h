@class NSUUID, NSString, NSDictionary;

@interface AFServiceDeviceContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSString *assistantIdentifier;
@property (readonly, copy, nonatomic) NSString *mediaSystemIdentifier;
@property (readonly, copy, nonatomic) NSString *mediaRouteIdentifier;
@property (readonly, copy, nonatomic) NSString *sharedUserID;
@property (readonly, copy, nonatomic) NSString *roomName;
@property (readonly, nonatomic) long long proximity;
@property (readonly, copy, nonatomic) NSDictionary *serializedContextByKey;
@property (readonly, copy, nonatomic) NSDictionary *metricsContext;

+ (id)newWithBuilder:(id /* block */)a0;

- (void)encodeWithCoder:(id)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithBuilder:(id /* block */)a0;
- (id)initWithIdentifier:(id)a0 assistantIdentifier:(id)a1 mediaSystemIdentifier:(id)a2 mediaRouteIdentifier:(id)a3 sharedUserID:(id)a4 roomName:(id)a5 proximity:(long long)a6 serializedContextByKey:(id)a7 metricsContext:(id)a8;

@end
