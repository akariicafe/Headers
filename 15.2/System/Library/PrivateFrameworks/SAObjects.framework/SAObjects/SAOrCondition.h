@class NSArray, NSString;

@interface SAOrCondition : AceObject <SASupportCondition>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *conditions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)orCondition;
+ (id)orConditionWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
