@class NSArray, NSString;
@protocol GEOVenueFloorInfo;

@interface GEOVenueComponentIdentifier : NSObject <GEOVenueComponentIdentifier>

@property (readonly, nonatomic, getter=_hasBuildingID) BOOL hasBuildingID;
@property (readonly, nonatomic) unsigned long long buildingID;
@property (readonly, nonatomic) id<GEOVenueFloorInfo> floorInfo;
@property (readonly, nonatomic) NSArray *sectionIDs;
@property (readonly, nonatomic, getter=_hasUnitID) BOOL hasUnitID;
@property (readonly, nonatomic) unsigned long long unitID;
@property (readonly, nonatomic, getter=_hasFixtureID) BOOL hasFixtureID;
@property (readonly, nonatomic) unsigned long long fixtureID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithBuildingID:(unsigned long long)a0;
- (id)initWithBuildingID:(unsigned long long)a0 floorInfo:(id)a1;
- (id)initWithBuildingID:(unsigned long long)a0 floorInfo:(id)a1 fixtureID:(unsigned long long)a2;
- (id)initWithBuildingID:(unsigned long long)a0 floorInfo:(id)a1 unitID:(unsigned long long)a2;
- (id)initWithVenueIdentifier:(id)a0;

@end
