@class MKFCKHome, NSUUID, NSDictionary, NSString, NSDate, NSSet, MKFCKZone;

@interface MKFCKRoom : MKFCKHomeObject

@property (retain, nonatomic) NSDictionary *applicationData;
@property (copy, nonatomic) NSUUID *flags;
@property (copy, nonatomic) NSUUID *homeModelID;
@property (copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (copy, nonatomic) NSString *writerVersion;
@property (retain, nonatomic) NSSet *accessories;
@property (retain, nonatomic) MKFCKHome *home;
@property (retain, nonatomic) MKFCKHome *homeDefault;
@property (retain, nonatomic) MKFCKZone *homeZone;
@property (retain, nonatomic) NSSet *zones;

+ (id)fetchRequest;

- (BOOL)exportFromLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;
- (BOOL)importIntoLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;

@end
