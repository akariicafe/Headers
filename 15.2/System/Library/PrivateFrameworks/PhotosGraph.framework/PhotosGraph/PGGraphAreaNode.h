@class MARelation, NSString, PGGraphAreaNodeCollection, MANodeFilter, PGGraphLocationNode;
@protocol PGGraphLocationOrAreaNodeCollection;

@interface PGGraphAreaNode : PGGraphOptimizedNode <PGGraphLocationOrArea, PGGraphLocationNaming, PGGraphLocationCoordinates, PGAssetCollectionFeature>

@property (class, readonly, nonatomic) MANodeFilter *blockedFilter;
@property (class, readonly, nonatomic) MANodeFilter *nonBlockedFilter;
@property (class, readonly, nonatomic) MARelation *addressOfArea;

@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } centroidCoordinate;
@property (readonly) NSString *name;
@property (readonly) unsigned char isBlocked : 1;
@property (readonly) NSString *fullname;
@property (readonly) PGGraphLocationNode *stateOrBiggerParentLocationNode;
@property (readonly) NSString *shortenedName;
@property (readonly, nonatomic) PGGraphAreaNodeCollection *collection;
@property (readonly, nonatomic) id<PGGraphLocationOrAreaNodeCollection> locationOrAreaNodeCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long featureType;
@property (readonly, nonatomic) NSString *featureIdentifier;

+ (id)filterWithName:(id)a0;
+ (id)filter;
+ (id)filterWithNames:(id)a0;
+ (id)propertiesWithName:(id)a0 isBlocked:(BOOL)a1;
+ (id)propertiesWithIsBlocked:(BOOL)a0;

- (struct CLLocationCoordinate2D { double x0; double x1; })coordinate;
- (BOOL)hasProperties:(id)a0;
- (id)propertyDictionary;
- (id)label;
- (void).cxx_destruct;
- (unsigned short)domain;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2 properties:(id)a3;
- (id)propertyForKey:(id)a0;
- (id)addressNodes;
- (id)initWithName:(id)a0 isBlocked:(BOOL)a1;
- (BOOL)diameterIsLargerThanDiameter:(double)a0;

@end
