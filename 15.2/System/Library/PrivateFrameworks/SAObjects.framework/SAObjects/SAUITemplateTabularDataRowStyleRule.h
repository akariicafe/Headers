@class NSNumber, NSString;

@interface SAUITemplateTabularDataRowStyleRule : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSNumber *minimumHeight;
@property (copy, nonatomic) NSNumber *rowCount;
@property (copy, nonatomic) NSNumber *rowStartIndex;
@property (copy, nonatomic) NSNumber *showTopBorder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tabularDataRowStyleRule;
+ (id)tabularDataRowStyleRuleWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
