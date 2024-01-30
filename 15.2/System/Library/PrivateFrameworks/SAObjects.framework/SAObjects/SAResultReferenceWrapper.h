@class SAResultObjectReference;

@interface SAResultReferenceWrapper : SAAceView

@property (retain, nonatomic) SAResultObjectReference *resultReference;

+ (id)resultReferenceWrapper;
+ (id)resultReferenceWrapperWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
