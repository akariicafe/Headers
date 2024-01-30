@class NSMutableDictionary, NSDictionary, NSMutableSet, NSString, NSSet;

@interface WFRecord : NSObject <NSCopying>

@property (readonly, nonatomic) NSDictionary *allPropertiesByName;
@property (readonly, nonatomic) NSMutableSet *fetchedPropertyNames;
@property (readonly, nonatomic) NSMutableSet *modifiedPropertyNames;
@property (readonly, nonatomic) NSMutableDictionary *lastFetchedValues;
@property (readonly, nonatomic) NSMutableSet *modifiedPropertyNamesSinceLastSave;
@property (readonly, nonatomic) NSMutableDictionary *lastSavedOrFetchedValues;
@property (copy, nonatomic) NSString *storageIdentifier;
@property (readonly, nonatomic) NSSet *allProperties;
@property (readonly, nonatomic) NSSet *fetchedProperties;
@property (readonly, nonatomic) NSSet *modifiedPropertiesSinceLastSave;
@property (readonly, nonatomic) NSSet *modifiedProperties;

+ (id)defaultPropertyValues;
+ (id)propertiesForClass:(Class)a0 walkingSuperclassesUntilReaching:(Class)a1;
+ (id)recordSubclassProperties;
+ (id)ignoredPropertyNames;
+ (id)propertiesForClass:(Class)a0;

- (id)initWithStorage:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)debugDescription;
- (id)initWithStorage:(id)a0 properties:(id)a1;
- (void)loadFromStorage:(id)a0;
- (void)loadFromStorage:(id)a0 properties:(id)a1;
- (BOOL)saveChangesToStorage:(id)a0 error:(id *)a1;
- (BOOL)writeToStorage:(id)a0 error:(id *)a1;
- (id)descriptionWithValues:(BOOL)a0;
- (void)markPropertyModifiedIfNecessary:(id)a0;
- (void)resetModifications:(BOOL)a0;
- (BOOL)saveProperties:(id)a0 toStorage:(id)a1 error:(id *)a2;
- (void)enumerateSettablePropertiesWithBlock:(id /* block */)a0;
- (void)setupPropertyObservation;
- (void)tearDownPropertyObservation;

@end
