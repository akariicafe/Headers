@class NSString, NSArray;

@interface _HKXMLExtractorSpecification : NSObject

@property (readonly, copy) NSString *specificationString;
@property (readonly, copy) NSArray *specificationElements;

- (void).cxx_destruct;
- (id)initWithSpecificationString:(id)a0;
- (BOOL)matchesElementStack:(id)a0;

@end
