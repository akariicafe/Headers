@class NSUUID, NSString, NSArray, NSDictionary;

@interface AFServiceDeviceContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSString *assistantIdentifier;
@property (readonly, copy, nonatomic) NSString *mediaSystemIdentifier;
@property (readonly, copy, nonatomic) NSString *mediaRouteIdentifier;
@property (readonly, copy, nonatomic) NSString *sharedUserID;
@property (readonly, copy, nonatomic) NSString *roomName;
@property (readonly, nonatomic) long long proximity;
@property (readonly, copy, nonatomic) NSArray *contextSnapshots;
@property (readonly, copy, nonatomic) NSDictionary *serializedContextByKey;
@property (readonly, copy, nonatomic) NSDictionary *metricsContext;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 assistantIdentifier:(id)a1 mediaSystemIdentifier:(id)a2 mediaRouteIdentifier:(id)a3 sharedUserID:(id)a4 roomName:(id)a5 proximity:(long long)a6 contextSnapshots:(id)a7 serializedContextByKey:(id)a8 metricsContext:(id)a9;
- (id)initWithIdentifier:(id)a0 mediaSystemIdentifier:(id)a1 mediaRouteIdentifier:(id)a2 roomName:(id)a3 proximity:(long long)a4 contextSnapshots:(id)a5 serializedContextByKey:(id)a6 metricsContext:(id)a7;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0 mediaSystemIdentifier:(id)a1 mediaRouteIdentifier:(id)a2 sharedUserID:(id)a3 roomName:(id)a4 proximity:(long long)a5 contextSnapshots:(id)a6 serializedContextByKey:(id)a7 metricsContext:(id)a8;
- (unsigned long long)hash;

@end
