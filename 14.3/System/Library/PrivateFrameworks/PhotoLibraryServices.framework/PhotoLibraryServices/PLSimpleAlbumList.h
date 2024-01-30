@class NSOrderedSet, NSString;

@interface PLSimpleAlbumList : NSObject <PLAssetContainerList>

@property (retain, nonatomic) NSOrderedSet *containers;
@property (readonly, nonatomic) unsigned long long containersCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)managedObjectContext;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)photoLibrary;
- (id)initWithAssetContainer:(id)a0;
- (id)initWithAssetContainers:(id)a0;
- (BOOL)canEditContainers;
- (id)containersRelationshipName;

@end
