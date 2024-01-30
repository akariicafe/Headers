@class NSUUID, MKFCKHome, NSString, NSData, NSDate, NSSet, NSDictionary, MKFCKRoom;

@interface MKFCKAccessory : MKFCKHomeObject

@property (retain, nonatomic) NSDictionary *applicationData;
@property (nonatomic) long long category;
@property (copy, nonatomic) NSUUID *conflictResolutionUUID;
@property (copy, nonatomic) NSUUID *homeModelID;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *manufacturer;
@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long networkClientIdentifier;
@property (nonatomic) long long networkClientLAN;
@property (copy, nonatomic) NSUUID *networkRouterUUID;
@property (copy, nonatomic) NSString *productData;
@property (copy, nonatomic) NSString *serialNumber;
@property (retain, nonatomic) NSData *wiFiUniquePreSharedKey;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (copy, nonatomic) NSString *writerVersion;
@property (retain, nonatomic) NSSet *automations;
@property (retain, nonatomic) MKFCKHome *home;
@property (retain, nonatomic) MKFCKRoom *room;
@property (retain, nonatomic) NSSet *scenes;

+ (id)fetchRequest;

- (BOOL)importIntoLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;
- (BOOL)exportFromLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;

@end
