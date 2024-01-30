@class NSArray, NSString, MPIdentifierSet, NSMutableDictionary;

@interface MPModelObject : NSObject <NSCopying, NSSecureCoding, NSObject> {
    MPIdentifierSet *_originalIdentifierSet;
    NSMutableDictionary *_storage;
    BOOL _isFinalized;
}

@property (class, readonly, nonatomic) long long genericObjectType;
@property (class, readonly, nonatomic) NSArray *classesForSecureCoding;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct MPLibraryAddStatusObserverConfiguration { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; } libraryAddStatusObserverConfiguration;
@property (readonly, nonatomic) long long libraryRemovalSupportedOptions;
@property (readonly, nonatomic) MPIdentifierSet *originalIdentifierSet;
@property (readonly, nonatomic) NSString *humanDescription;
@property (readonly, copy, nonatomic) MPIdentifierSet *identifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (BOOL)resolveInstanceMethod:(SEL)a0;
+ (void)_indexProperties;
+ (BOOL)_lookupPropertyForSelector:(SEL)a0 result:(id /* block */)a1;
+ (id)_modelKeyForPropertySelector:(SEL)a0;
+ (void)performWithoutEnforcement:(id /* block */)a0;
+ (id)requiredKeepLocalStatusObservationProperties;
+ (id)requiredLibraryAddStatusObservationProperties;
+ (id)requiredLibraryRemovalProperties;
+ (BOOL)supportsKeepLocalStatusObservation;
+ (BOOL)supportsLibraryAddStatusObservation;
+ (BOOL)supportsLibraryRemoval;

- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)valueForUndefinedKey:(id)a0;
- (id)initWithIdentifiers:(id)a0;
- (void).cxx_destruct;
- (id)_stateDumpObject;
- (BOOL)_isModelKey:(id)a0;
- (id)_sanitizedStorage;
- (id)contentItemCollectionInfo;
- (id)copyWithIdentifiers:(id)a0;
- (id)copyWithIdentifiers:(id)a0 block:(id /* block */)a1;
- (id)copyWithIdentifiers:(id)a0 propertySet:(id)a1;
- (id)copyWithPropertySet:(id)a0;
- (BOOL)hasLoadedValueForKey:(id)a0;
- (BOOL)hasLoadedValuesForPropertySet:(id)a0;
- (id)initWithIdentifiers:(id)a0 block:(id /* block */)a1;
- (id)mediaItemPropertyValues;
- (id)mergeWithObject:(id)a0;
- (id)newKeepLocalStatusObserverConfiguration;
- (void)setValue:(id)a0 forModelKey:(id)a1;
- (id)valueForModelKey:(id)a0;

@end
