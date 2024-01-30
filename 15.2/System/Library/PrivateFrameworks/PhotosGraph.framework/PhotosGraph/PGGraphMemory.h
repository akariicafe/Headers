@class NSString, PGGraphMomentNodeCollection, PGGraphFeatureNodeCollection;

@interface PGGraphMemory : NSObject <PGMemoryNodeProtocol>

@property (readonly, nonatomic) PGGraphFeatureNodeCollection *memoryFeatureNodes;
@property (readonly, nonatomic) NSString *uniqueMemoryIdentifier;
@property (readonly, nonatomic) unsigned long long memoryCategory;
@property (readonly, nonatomic) unsigned long long memoryCategorySubcategory;
@property (readonly, nonatomic) PGGraphMomentNodeCollection *memoryMomentNodes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
