@class NSString;

@interface GEOVenueFloorInfo : NSObject <GEOVenueFloorInfo>

@property (readonly, nonatomic) short ordinal;
@property (readonly, nonatomic) unsigned long long levelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)floorInfosFromLevels:(id)a0;
+ (BOOL)isIntegerValidOrdinal:(long long)a0;

- (id)initWithLevel:(id)a0;
- (id)init;
- (id)initWithOrdinal:(short)a0 levelID:(unsigned long long)a1;

@end
