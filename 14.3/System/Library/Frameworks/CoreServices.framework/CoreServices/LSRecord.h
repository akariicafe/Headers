@class _LSDatabase, NSArray, NSURL, NSData;

@interface LSRecord : NSObject <LSDetachable, NSSecureCoding, NSCopying, NSDiscardableContent> {
    struct unordered_map<SEL *, id, std::__1::hash<SEL *>, std::__1::equal_to<SEL *>, std::__1::allocator<std::__1::pair<SEL *const, id> > > { struct __hash_table<std::__1::__hash_value_type<SEL *, id>, std::__1::__unordered_map_hasher<SEL *, std::__1::__hash_value_type<SEL *, id>, std::__1::hash<SEL *>, true>, std::__1::__unordered_map_equal<SEL *, std::__1::__hash_value_type<SEL *, id>, std::__1::equal_to<SEL *>, true>, std::__1::allocator<std::__1::__hash_value_type<SEL *, id> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SEL *, id>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SEL *, id>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SEL *, id>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SEL *, id>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SEL *, id>, void *> *> **x0; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SEL *, id>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SEL *, id>, void *> *> *> > { unsigned long long x0; } x0; } x1; } x0; } x0; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SEL *, id>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<SEL *, id>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SEL *, id>, void *> *> { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<SEL *, id>, void *> *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<SEL *, std::__1::__hash_value_type<SEL *, id>, std::__1::hash<SEL *>, true> > { unsigned long long x0; } x2; struct __compressed_pair<float, std::__1::__unordered_map_equal<SEL *, std::__1::__hash_value_type<SEL *, id>, std::__1::equal_to<SEL *>, true> > { float x0; } x3; } x0; } *_resolvedProperties;
    struct LSContext { _LSDatabase *db; } _context;
    unsigned int _unitID;
    unsigned short _tableID : 16;
    unsigned short _discardableContentCounter : 14;
    unsigned char _intentionallyInvalid : 1;
    unsigned char _shared : 1;
}

@property (class, readonly) NSArray *_propertyClasses;
@property (class, readonly) BOOL hasDatabaseAccess;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSURL *visualizerURL;
@property (nonatomic, getter=_isShared, setter=_setShared:) BOOL _shared;
@property (readonly, nonatomic) id compatibilityObject;
@property (readonly) NSData *persistentIdentifier;

+ (void)initialize;
+ (void)resolveAllPropertiesOfRecords:(const id *)a0 count:(unsigned long long)a1 andDetachOnQueue:(id)a2;
+ (void)resolveAllPropertiesOfRecords:(id)a0 andDetachOnQueue:(id)a1;
+ (id)new;

- (void)detach;
- (id)_initInvalid;
- (id)_replacementObjectForResolvedPropertyValue:(id)a0 forGetter:(SEL)a1 encoder:(id)a2;
- (id)_initWithContext:(struct LSContext { id x0; } *)a0 persistentIdentifierData:(const struct LSPersistentIdentifierData { unsigned char x0; unsigned char x1[3]; unsigned int x2; unsigned int x3; unsigned char x4[16]; char x5[0]; } *)a1 length:(unsigned long long)a2;
- (id)_initWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2;
- (id)_resolvedPropertyValueForGetter:(SEL)a0 nullPlaceholder:(id)a1;
- (id)_compatibilityObjectWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const void *)a3;
- (id)_resolvedPropertyValueForGetter:(SEL)a0;
- (void)_detachFromContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const void *)a3;
- (void)_resolveAllProperties;
- (void)_removeResolvedPropertyValueForGetter:(SEL)a0;
- (id)_persistentIdentifierWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const void *)a3;
- (const struct vector<std::__1::pair<SEL *, void (*)(id, SEL *)>, std::__1::allocator<std::__1::pair<SEL *, void (*)(id, SEL *)> > > { struct pair<SEL *, void (*)(id, SEL *)> *x0; struct pair<SEL *, void (*)(id, SEL *)> *x1; struct __compressed_pair<std::__1::pair<SEL *, void (*)(id, SEL *)> *, std::__1::allocator<std::__1::pair<SEL *, void (*)(id, SEL *)> > > { struct pair<SEL *, void (*)(id, SEL *)> *x0; } x2; } *)_resolvingMethods;
- (void)resolveAllPropertiesAndDetachOnQueue:(id)a0;
- (void)_setResolvedPropertyValue:(id)a0 forGetter:(SEL)a1;
- (id)_attributedDescription;
- (void)_performBlockWithContext:(id /* block */)a0;
- (id)initWithPersistentIdentifier:(id)a0;
- (id)_propertyClassesForCoding;
- (id)init;
- (void)_ifAttached:(id /* block */)a0 else:(id /* block */)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)discardContentIfPossible;
- (id).cxx_construct;
- (void)endContentAccess;
- (BOOL)beginContentAccess;
- (BOOL)isContentDiscarded;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;

@end
