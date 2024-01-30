@class NSString, NSArray;

@interface SASiriSupport : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *authToken;
@property (copy, nonatomic) NSArray *endpoints;
@property (copy, nonatomic) NSArray *useCases;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)siriSupport;
+ (id)siriSupportWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
