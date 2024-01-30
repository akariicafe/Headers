@class PHPhotoLibrary, NSDictionary, _PHDictionaryKeyValueWrapper;

@interface PHPropertyFetchingHelper : NSObject {
    NSDictionary *_fetchedPropertyNamesByEntityName;
    NSDictionary *_propertyValuesByOID;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    _PHDictionaryKeyValueWrapper *_lock_dictionaryWrapper;
}

@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;

+ (id)fetchPropertiesForObjectIDs:(id)a0 propertyNamesByEntityName:(id)a1 photoLibrary:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (BOOL)evaluateQuery:(id)a0 withObjectID:(id)a1 outMissingPropertyNames:(out id *)a2;
- (id)fetchedPropertiesForObjectID:(id)a0;
- (id)initWithObjectIDs:(id)a0 propertyNamesByEntityName:(id)a1 photoLibrary:(id)a2;

@end
