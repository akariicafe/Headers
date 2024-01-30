@class NSString, HMZone, HFMutableSetDiff, NSSet;

@interface HFZoneBuilder : HFItemBuilder

@property (retain, nonatomic) HFMutableSetDiff *roomUUIDs;
@property (readonly, nonatomic) HMZone *zone;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSSet *rooms;

+ (id)na_identity;
+ (Class)homeKitRepresentationClass;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)_performValidation;
- (void).cxx_destruct;
- (void)setZone:(id)a0;
- (id)_updateName;
- (void)addRoom:(id)a0;
- (id)commitItem;
- (id)initWithExistingObject:(id)a0 inHome:(id)a1;
- (void)removeRoom:(id)a0;
- (id)_createZone;
- (id)_updateRooms;

@end
