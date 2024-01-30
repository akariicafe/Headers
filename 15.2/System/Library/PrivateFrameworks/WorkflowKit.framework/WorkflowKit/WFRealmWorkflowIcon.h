@class NSData, RLMLinkingObjects;

@interface WFRealmWorkflowIcon : RLMObject <NSCopying>

@property (nonatomic) long long backgroundColorValue;
@property (nonatomic) long long glyphNumber;
@property (copy, nonatomic) NSData *customImageData;
@property (readonly) RLMLinkingObjects *workflows;

+ (id)className;
+ (id)requiredProperties;
+ (id)defaultPropertyValues;
+ (id)linkingObjectsProperties;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
