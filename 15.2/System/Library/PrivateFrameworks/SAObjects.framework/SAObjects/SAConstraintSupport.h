@class NSString;
@protocol SASupportCondition;

@interface SAConstraintSupport : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) id<SASupportCondition> condition;
@property (copy, nonatomic) NSString *property;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)constraintSupport;
+ (id)constraintSupportWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
