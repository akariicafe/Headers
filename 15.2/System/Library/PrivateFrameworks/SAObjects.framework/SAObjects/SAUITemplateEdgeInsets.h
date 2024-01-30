@class NSString;

@interface SAUITemplateEdgeInsets : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) float bottom;
@property (nonatomic) float left;
@property (nonatomic) float right;
@property (nonatomic) float top;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)edgeInsets;
+ (id)edgeInsetsWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
