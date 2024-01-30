@class NSDictionary, NSString;

@interface SAEndpoint : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *operations;
@property (copy, nonatomic) NSString *providerId;
@property (nonatomic) BOOL supportsAuthentication;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)endpoint;
+ (id)endpointWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
