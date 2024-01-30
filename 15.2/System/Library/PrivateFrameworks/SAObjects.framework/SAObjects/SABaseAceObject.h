@class NSString;

@interface SABaseAceObject : AceObject <SAAceReferable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *metricsContext;
@property (copy, nonatomic) NSString *aceId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)baseAceObject;
+ (id)baseAceObjectWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
