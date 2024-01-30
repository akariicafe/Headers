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
- (BOOL)canEditContainers;
- (id)photoLibrary;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)containersRelationshipName;

@end
