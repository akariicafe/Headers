@class NSOrderedSet, NSString;

@interface PXFeedAssetContainerList : NSObject <PLAssetContainerList>

@property (copy, nonatomic) NSOrderedSet *sectionInfos;
@property (readonly, nonatomic) NSString *transientIdentifier;
@property (readonly, nonatomic) unsigned long long containersCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)managedObjectContext;
- (id)containers;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)photoLibrary;
- (BOOL)canEditContainers;
- (BOOL)isEqual:(id)a0;
- (id)containersRelationshipName;

@end
