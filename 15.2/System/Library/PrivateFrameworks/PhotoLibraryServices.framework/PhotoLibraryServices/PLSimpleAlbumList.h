@class NSOrderedSet, NSString;

@interface PLSimpleAlbumList : NSObject <PLAssetContainerList>

@property (retain, nonatomic) NSOrderedSet *containers;
@property (readonly, nonatomic) unsigned long long containersCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)managedObjectContext;
- (id)initWithAssetContainer:(id)a0;
- (BOOL)canEditContainers;
- (id)photoLibrary;
- (id)initWithAssetContainers:(id)a0;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)containersRelationshipName;

@end
