@class NSString;

@interface UPResultLeafNode : UPResultNode

@property (readonly, copy) NSString *text;
@property (readonly, copy) NSString *semanticValue;

- (id)_dictionaryRepresentation;
- (void).cxx_destruct;
- (id)initWithLabel:(id)a0 andText:(id)a1 andSemanticValue:(id)a2;

@end
