@class PGGraphMomentNodeCollection, NSSet, PGGraphFeatureNodeCollection, PGGraphDateNodeCollection, NSString;

@interface PGGraphHolidayNodeCollection : PGGraphNodeCollection <PGAssetCollectionFeatureNodeCollection>

@property (readonly, nonatomic) PGGraphMomentNodeCollection *celebratingMomentNodes;
@property (readonly, nonatomic) PGGraphDateNodeCollection *dateNodes;
@property (readonly, nonatomic) NSSet *holidayNames;
@property (readonly, nonatomic) NSSet *localizedHolidayNames;
@property (readonly, nonatomic) PGGraphFeatureNodeCollection *featureNodeCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)nodeClass;
+ (id)holidayNodesWithCategory:(unsigned long long)a0 inGraph:(id)a1;
+ (id)holidayNodesWithName:(id)a0 inGraph:(id)a1;
+ (id)holidayNodesWithNames:(id)a0 inGraph:(id)a1;


@end
