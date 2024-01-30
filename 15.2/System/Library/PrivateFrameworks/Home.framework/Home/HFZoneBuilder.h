@class NSString, HMZone, HFMutableSetDiff, NSSet;

@interface HFZoneBuilder : HFItemBuilder

@property (retain, nonatomic) HFMutableSetDiff *roomUUIDs;
@property (readonly, nonatomic) HMZone *zone;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSSet *rooms;

+ (id)na_identity;
+ (Class)homeKitRepresentationClass;

- (id)_performValidation;
- (void)setZone:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addRoom:(id)a0;
- (id)_updateName;
- (id)initWithExistingObject:(id)a0 inHome:(id)a1;
- (id)commitItem;
- (id)_updateRooms;
- (id)_createZone;
- (void)removeRoom:(id)a0;

@end
