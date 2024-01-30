@class NSString, NSData;

@interface IDSDestinationPushToken : IDSDestination

@property (readonly, nonatomic) NSString *alias;
@property (readonly, nonatomic) NSData *pushToken;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)destinationURIs;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)groupID;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithAlias:(id)a0 pushToken:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
