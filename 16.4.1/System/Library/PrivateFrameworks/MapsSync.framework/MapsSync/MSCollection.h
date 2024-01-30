@class NSString, NSData;

@interface MSCollection : MapsSync.MapsSyncObject {
    void /* unknown type, empty encoding */ _collectionDescription;
    void /* unknown type, empty encoding */ _image;
    void /* unknown type, empty encoding */ _imageUrl;
    void /* unknown type, empty encoding */ _positionIndex;
    void /* unknown type, empty encoding */ _title;
    void /* unknown type, empty encoding */ _placeChanges;
}

@property (class, nonatomic, readonly) Class managedClass;

@property (nonatomic, copy) NSString *collectionDescription;
@property (nonatomic, copy) NSData *image;
@property (nonatomic, copy) NSString *imageUrl;
@property (nonatomic) long long positionIndex;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (void)addPlace:(id)a0;
- (void)beforeDeleteWithManaged:(id)a0;
- (id)fetchPlaces;
- (void)flushChanges;
- (id)initWithObject:(id)a0 store:(id)a1;
- (id)initWithStore:(id)a0 collectionDescription:(id)a1 image:(id)a2 imageUrl:(id)a3 positionIndex:(long long)a4 title:(id)a5;
- (void)removePlace:(id)a0;
- (void)setPropertiesUnsafeWithManagedObject:(id)a0;

@end
