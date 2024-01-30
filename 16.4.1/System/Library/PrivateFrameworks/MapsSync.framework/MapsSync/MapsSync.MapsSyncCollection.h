@class NSSet, NSString, NSData;

@interface MapsSync.MapsSyncCollection : MapsSync.MapsSyncBaseItem {
    void /* unknown type, empty encoding */ _collectionDescription;
    void /* unknown type, empty encoding */ _image;
    void /* unknown type, empty encoding */ _imageUrl;
    void /* unknown type, empty encoding */ _title;
    void /* unknown type, empty encoding */ _places;
    void /* unknown type, empty encoding */ _placesUnstored;
}

@property (nonatomic, copy) NSSet *_placesUnstored;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *collectionDescription;
@property (nonatomic, readonly) NSData *image;
@property (nonatomic, readonly) NSString *imageUrl;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSSet *places;
@property (nonatomic, readonly) long long placesCount;

+ (void)deleteUniquelyOwnedCollectionItemsWithCollection:(id)a0 context:(id)a1 completion:(id /* block */)a2;
+ (id)fetchCollectionForIdentifier:(id)a0;
+ (void)fetchUniquelyOwnedCollectionItemsWithCollection:(id)a0 context:(id)a1 completion:(id /* block */)a2;

- (id)initWithObject:(id)a0;
- (id)copyWithZone:(void *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)attributesEqual:(id)a0;
- (void)addEditWithBlock:(id /* block */)a0;
- (void)deleteWithCompletion:(id /* block */)a0;
- (void)executeOnFirstSave:(id)a0;
- (Class)managedObjectClass;
- (Class)mutableObjectClass;
- (void)setPropertiesWithObject:(id)a0;

@end
