@class NSString, NSNumber;

@interface SAConnectionPolicyRoute : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *cname;
@property (copy, nonatomic) NSString *connectionId;
@property (copy, nonatomic) NSString *host;
@property (copy, nonatomic) NSNumber *mptcp;
@property (nonatomic) long long priority;
@property (copy, nonatomic) NSString *resolver;
@property (copy, nonatomic) NSString *resolverProtocol;
@property (copy, nonatomic) NSString *routeId;
@property (copy, nonatomic) NSNumber *timeout;
@property (copy, nonatomic) NSString *type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)connectionPolicyRoute;
+ (id)connectionPolicyRouteWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
