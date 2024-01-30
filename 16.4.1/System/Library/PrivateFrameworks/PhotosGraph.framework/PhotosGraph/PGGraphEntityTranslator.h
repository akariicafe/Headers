@class NSString, PHPhotoLibrary;

@interface PGGraphEntityTranslator : NSObject

@property (class, readonly, nonatomic) NSString *entityClassName;
@property (class, readonly, nonatomic) BOOL includesRelationshipChanges;

@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;

+ (id)uuidFromLocalIdentifier:(id)a0;
+ (id)uuidsFromLocalIdentifiers:(id)a0;

- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (id)graphChangesForChangedPropertyNamesByLocalIdentifier:(id)a0 change:(id)a1 progressBlock:(id /* block */)a2;
- (id)graphChangesForDeletedLocalIdentifiers:(id)a0 progressBlock:(id /* block */)a1;
- (id)graphChangesForInsertedLocalIdentifiers:(id)a0 progressBlock:(id /* block */)a1;

@end
