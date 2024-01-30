@class MARelation, PGGraphFeatureNodeCollection, NSString, PGGraphDateNodeCollection;

@interface PGGraphCalendarUnitNodeCollection : PGGraphNodeCollection <PGAssetCollectionFeatureNodeCollection>

@property (class, readonly, nonatomic) unsigned long long calendarUnit;
@property (class, readonly) MARelation *dateOfCalendarUnit;

@property (readonly, nonatomic) PGGraphDateNodeCollection *dateNodes;
@property (readonly, nonatomic) PGGraphFeatureNodeCollection *featureNodeCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)filter;
+ (Class)nodeClass;
+ (id)calendarUnitNodesForUnitValue:(long long)a0 inGraph:(id)a1;
+ (id)calendarUnitNodesForUnitValues:(id)a0 inGraph:(id)a1;


@end
