@class MKFCKHome, NSString, NSUUID, NSArray, NSDate, NSSet;

@interface MKFCKTrigger : MKFCKHomeObject

@property (nonatomic) BOOL autoDelete;
@property (copy, nonatomic) NSString *configuredName;
@property (copy, nonatomic) NSUUID *conflictResolutionUUID;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL executeOnce;
@property (copy, nonatomic) NSUUID *homeModelID;
@property (copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSArray *recurrences;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (copy, nonatomic) NSString *writerVersion;
@property (retain, nonatomic) MKFCKHome *home;
@property (retain, nonatomic) NSSet *scenes;

+ (id)fetchRequest;

- (BOOL)importIntoLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;
- (BOOL)exportFromLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;

@end
