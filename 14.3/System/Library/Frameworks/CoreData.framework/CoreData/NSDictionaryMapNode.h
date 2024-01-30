@interface NSDictionaryMapNode : NSStoreMapNode <NSCoding, NSSecureCoding> {
    id *_attributes;
    id _attributesAsEncoded;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (void)initialize;

- (void)dealloc;
- (id)valueForKey:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithValues:(id *)a0 objectID:(id)a1;
- (const id *)attributeValues;
- (void)encodeWithCoder:(id)a0;

@end
