@class NSString, NSDictionary;

@interface _HKXMLExtractorElement : NSObject

@property (readonly, copy) NSString *specificationElement;
@property (readonly, copy) NSDictionary *specificationAttributes;

- (void).cxx_destruct;
- (id)initWithElementName:(id)a0 attributes:(id)a1;
- (BOOL)matchesElement:(id)a0;
- (id)initWithTagSpecification:(id)a0;

@end
