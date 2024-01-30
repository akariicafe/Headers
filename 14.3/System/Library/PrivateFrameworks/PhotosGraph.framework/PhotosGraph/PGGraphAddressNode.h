@class MARelation, NSString, PPLocationNamedEntities, CLLocation;

@interface PGGraphAddressNode : PGGraphLocationNode <PGGraphPortraitLocationNamedEntity> {
    long long _locationMode;
}

@property (class, readonly, nonatomic) MARelation *homeOfAddress;
@property (class, readonly, nonatomic) MARelation *workOfAddress;
@property (class, readonly, nonatomic) MARelation *homeWorkOfAddress;
@property (class, readonly, nonatomic) MARelation *cityOfAddress;

@property (readonly, nonatomic) PPLocationNamedEntities *pg_locationNamedEntity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) long long locationMode;
@property (readonly, nonatomic) BOOL isImproved;
@property (readonly, nonatomic) BOOL isOcean;
@property (readonly, nonatomic) BOOL isCoarse;
@property (readonly, nonatomic) BOOL isPrecise;
@property (readonly, nonatomic) CLLocation *location;

+ (id)filter;

- (id)momentNodes;
- (void)enumerateAreaNodesUsingBlock:(id /* block */)a0;
- (id)stateNode;
- (void)enumerateMomentNodesUsingBlock:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)hasProperties:(id)a0;
- (id)districtNode;
- (id)propertyDictionary;
- (id)UUID;
- (void)setLocalProperties:(id)a0;
- (id)countryNode;
- (unsigned short)domain;
- (void)enumeratePersonHomeOrWorkNodesUsingBlock:(id /* block */)a0;
- (id)cityNode;
- (id)label;
- (BOOL)isPersonHomeOrWorkAddress;
- (id)areaNodes;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2;
- (id)streetNode;

@end
