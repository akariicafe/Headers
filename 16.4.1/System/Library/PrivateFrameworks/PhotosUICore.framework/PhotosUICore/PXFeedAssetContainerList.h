@class NSOrderedSet, NSString;

@interface PXFeedAssetContainerList : NSObject <PLAssetContainerList>

@property (copy, nonatomic) NSOrderedSet *sectionInfos;
@property (readonly, nonatomic) NSString *transientIdentifier;
@property (readonly, nonatomic) unsigned long long containersCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)containers;
- (BOOL)isEmpty;
- (id)containersRelationshipName;
- (id)managedObjectContext;
- (id)photoLibrary;
- (BOOL)canEditContainers;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
