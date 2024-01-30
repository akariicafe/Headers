@class NSString, NSURL, NSSet, NSOrderedSet, NSDictionary, UTTypeRecord, NSNumber;

@interface UTType : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) UTType *_typeOfCurrentDevice;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSSet *supertypes;
@property (readonly) NSDictionary *tags;
@property (readonly) long long _constantIndex;
@property (readonly) long long _constantIndex;
@property (readonly, getter=_isRealized) BOOL _realized;
@property (readonly) UTTypeRecord *_typeRecord;
@property (readonly) NSDictionary *_localizedDescriptionDictionary;
@property (readonly) NSString *_kindString;
@property (readonly) NSDictionary *_kindStringDictionary;
@property (readonly) NSOrderedSet *_parentTypes;
@property (readonly) NSSet *_childTypes;
@property (readonly) NSSet *_subtypes;
@property (readonly, getter=_isExported) BOOL _exported;
@property (readonly, getter=_isImported) BOOL _imported;
@property (readonly, getter=_isWildcard) BOOL _wildcard;
@property (readonly, getter=_isCoreType) BOOL _coreType;
@property (readonly) NSString *identifier;
@property (readonly) NSString *preferredFilenameExtension;
@property (readonly) NSString *preferredMIMEType;
@property (readonly) NSString *localizedDescription;
@property (readonly) NSNumber *version;
@property (readonly) NSURL *referenceURL;
@property (readonly, getter=isDynamic) BOOL dynamic;
@property (readonly, getter=isDeclared) BOOL declared;
@property (readonly, getter=isPublicType) BOOL publicType;

+ (id)importedTypeWithIdentifier:(id)a0 conformingToType:(id)a1;
+ (id)importedTypeWithIdentifier:(id)a0;
+ (id)typeWithIdentifier:(id)a0;
+ (id)_typeOfPromiseAtFileURL:(id)a0 error:(id *)a1;
+ (id)_typesWithIdentifiers:(id)a0;
+ (id)new;
+ (id)exportedTypeWithIdentifier:(id)a0;
+ (id)_importedTypeWithIdentifier:(id)a0 bundle:(id)a1 conformingToType:(id)a2;
+ (id)_typeWithIdentifier:(id)a0 constantIndex:(long long)a1 error:(id *)a2;
+ (id)typesWithTag:(id)a0 tagClass:(id)a1 conformingToType:(id)a2;
+ (id)exportedTypeWithIdentifier:(id)a0 conformingToType:(id)a1;
+ (id)typeWithTag:(id)a0 tagClass:(id)a1 conformingToType:(id)a2;
+ (id)_typeWithTypeRecord:(id)a0 detachTypeRecord:(BOOL)a1 findConstant:(BOOL)a2;
+ (id)_typeWithDeviceModelCode:(id)a0 enclosureColor:(struct UTHardwareColor { unsigned char x0; unsigned char x1[3]; union { struct { unsigned char x0; unsigned char x1; unsigned char x2; } x0; int x1; } x2; })a1;
+ (void)_unrealizeAllCoreTypes;
+ (id)_typeOfItemAtFileURL:(id)a0 error:(id *)a1;
+ (void)_enumerateAllDeclaredTypesUsingBlock:(id /* block */)a0;
+ (id)typeWithMIMEType:(id)a0;
+ (id)_typeWithDeviceModelCode:(id)a0;
+ (id)typeWithFilenameExtension:(id)a0 conformingToType:(id)a1;
+ (id)_typeForURLPropertyProviderWithTypeRecord:(id)a0;
+ (id)_constantTypeForURLPropertyProviderWithIdentifier:(id)a0;
+ (id)typeWithFilenameExtension:(id)a0;
+ (id)_exportedTypeWithIdentifier:(id)a0 bundle:(id)a1 conformingToType:(id)a2;
+ (id)typeWithMIMEType:(id)a0 conformingToType:(id)a1;

- (BOOL)_shouldURLPropertyProviderEncodeTypeRecord;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)_getEnclosureColor:(struct UTHardwareColor { unsigned char x0; unsigned char x1[3]; union { struct { unsigned char x0; unsigned char x1; unsigned char x2; } x0; int x1; } x2; } *)a0;
- (id)_localizedDescriptionWithPreferredLocalizations:(id)a0;
- (id)_preferredTagOfClass:(id)a0;
- (id)_initWithTypeRecord:(id)a0;
- (void)_unrealize;
- (id)_kindStringWithPreferredLocalizations:(id)a0;
- (BOOL)isSubtypeOfType:(id)a0;
- (BOOL)isSupertypeOfType:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)conformsToType:(id)a0;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;

@end
