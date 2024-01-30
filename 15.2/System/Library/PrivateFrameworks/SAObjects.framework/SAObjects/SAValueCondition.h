@class NSArray, NSString;

@interface SAValueCondition : AceObject <SASupportCondition>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *legalValues;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)valueCondition;
+ (id)valueConditionWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
