@class NSOrderedSet, NSString;

@interface PLSimpleAlbumList : NSObject <PLAssetContainerList>

@property (retain, nonatomic) NSOrderedSet *containers;
@property (readonly, nonatomic) unsigned long long containersCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEmpty;
- (id)containersRelationshipName;
- (id)managedObjectContext;
- (id)photoLibrary;
- (BOOL)canEditContainers;
- (void).cxx_destruct;
- (id)initWithAssetContainers:(id)a0;
- (id)initWithAssetContainer:(id)a0;

@end
