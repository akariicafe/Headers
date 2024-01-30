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
+ (id)ignoredPropertyNames;
+ (id)propertiesForClass:(Class)a0;
+ (id)propertiesForClass:(Class)a0 walkingSuperclassesUntilReaching:(Class)a1;
+ (id)recordSubclassProperties;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (void)dealloc;
- (id)initWithStorage:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)saveProperties:(id)a0 toStorage:(id)a1 error:(id *)a2;
- (id)descriptionWithValues:(BOOL)a0;
- (void)enumerateSettablePropertiesWithBlock:(id /* block */)a0;
- (id)initWithStorage:(id)a0 properties:(id)a1;
- (id)initWithStorage:(id)a0 properties:(id)a1 settingDefaultValues:(BOOL)a2;
- (void)loadFromStorage:(id)a0;
- (void)loadFromStorage:(id)a0 properties:(id)a1;
- (void)markPropertyModifiedIfNecessary:(id)a0;
- (void)resetModificationsForProperties:(id)a0 onlySinceLastSave:(BOOL)a1;
- (BOOL)saveChangesToStorage:(id)a0 error:(id *)a1;
- (void)setDefaultPropertyValuesExceptFetched;
- (void)setupPropertyObservation;
- (void)tearDownPropertyObservation;
- (BOOL)writeToStorage:(id)a0 error:(id *)a1;

@end
