@interface NSDictionaryMapNode : NSStoreMapNode <NSCoding, NSSecureCoding> {
    id *_attributes;
    id _attributesAsEncoded;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (void)initialize;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)valueForKey:(id)a0;
- (void)dealloc;
- (id)initWithValues:(id *)a0 objectID:(id)a1;

@end
