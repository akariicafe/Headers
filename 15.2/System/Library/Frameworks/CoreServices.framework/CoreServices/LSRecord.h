@class _LSDatabase, NSArray, NSURL, NSData;

@interface LSRecord : NSObject <LSDetachable, NSSecureCoding, NSCopying, NSDiscardableContent> {
    void *_resolvedProperties;
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

- (unsigned int)unitID;
- (unsigned int)tableID;
- (id)_replacementObjectForResolvedPropertyValue:(id)a0 forGetter:(SEL)a1 encoder:(id)a2;
- (void)_detachFromContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const void *)a3;
- (id)_initInvalid;
- (id)_compatibilityObjectWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const void *)a3;
- (id)_initWithContext:(struct LSContext { id x0; } *)a0 persistentIdentifierData:(const struct LSPersistentIdentifierData { unsigned char x0; unsigned char x1[3]; unsigned int x2; unsigned int x3; unsigned char x4[16]; char x5[0]; } *)a1 length:(unsigned long long)a2;
- (id)_persistentIdentifierWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const void *)a3;
- (void)_setResolvedPropertyValue:(id)a0 forGetter:(SEL)a1;
- (void)_ifAttached:(id /* block */)a0 else:(id /* block */)a1;
- (id)_initWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2;
- (void)_performBlockWithContext:(id /* block */)a0;
- (id)_resolvedPropertyValueForGetter:(SEL)a0;
- (void)_resolveAllProperties;
- (id)_resolvedPropertyValueForGetter:(SEL)a0 nullPlaceholder:(id)a1;
- (id)initWithPersistentIdentifier:(id)a0;
- (const void *)_resolvingMethods;
- (id)_initWithContext:(struct LSContext { id x0; } *)a0 persistentIdentifier:(id)a1;
- (void)_removeResolvedPropertyValueForGetter:(SEL)a0;
- (id)_attributedDescription;
- (id)_propertyClassesForCoding;
- (void)resolveAllPropertiesAndDetachOnQueue:(id)a0;
- (void)detach;
- (BOOL)isContentDiscarded;
- (void)endContentAccess;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void)discardContentIfPossible;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)beginContentAccess;
- (id).cxx_construct;
- (id)debugDescription;

@end
