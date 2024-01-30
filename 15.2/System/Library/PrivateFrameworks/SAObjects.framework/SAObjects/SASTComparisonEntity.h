@class SAUIDecoratedText, SAUINanoImageResource, NSString;

@interface SASTComparisonEntity : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SAUIDecoratedText *decoratedTitle;
@property (retain, nonatomic) SAUIDecoratedText *decoratedValue;
@property (retain, nonatomic) SAUINanoImageResource *imageResource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)comparisonEntity;
+ (id)comparisonEntityWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
