@class NSMutableDictionary;

@interface TSUExtendedAttributeCollection : NSObject {
    NSMutableDictionary *_attributes;
}

+ (BOOL)removeExtraExtendedAttributesAtPath:(id)a0 forIntent:(unsigned int)a1 options:(int)a2 error:(id *)a3;

- (id)initWithAttributes:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)allAttributes;
- (id)initWithPath:(id)a0 options:(int)a1 error:(id *)a2;
- (id)initWithPath:(id)a0 forRemoval:(BOOL)a1 options:(int)a2 error:(id *)a3;
- (BOOL)setAttributeCollectionToPath:(id)a0 intent:(unsigned int)a1 options:(int)a2 forRemoval:(BOOL)a3 error:(id *)a4;
- (BOOL)setAttributeCollectionToPath:(id)a0 intent:(unsigned int)a1 options:(int)a2 error:(id *)a3;
- (id)extendedAttributeForName:(id)a0;
- (void)setExtendedAttributeValue:(id)a0 forName:(id)a1;

@end
