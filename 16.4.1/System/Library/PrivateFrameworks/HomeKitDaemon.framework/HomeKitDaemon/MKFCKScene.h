@class MKFCKHome, NSArray, NSDictionary, NSUUID, NSString, NSDate, NSSet;

@interface MKFCKScene : MKFCKHomeObject

@property (retain, nonatomic) NSArray *actions;
@property (retain, nonatomic) NSDictionary *applicationData;
@property (copy, nonatomic) NSUUID *flags;
@property (copy, nonatomic) NSUUID *homeModelID;
@property (copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (copy, nonatomic) NSString *writerVersion;
@property (retain, nonatomic) NSSet *accessories;
@property (retain, nonatomic) NSSet *automations;
@property (retain, nonatomic) MKFCKHome *home;

+ (id)fetchRequest;

- (id)decodeActionAppleMediaAccessoryPower:(id)a0 localModel:(id)a1 context:(id)a2;
- (id)decodeActionCharacteristic:(id)a0 localModel:(id)a1 context:(id)a2;
- (id)decodeActionMediaPlayback:(id)a0 localModel:(id)a1 context:(id)a2;
- (id)decodeActionNaturalLight:(id)a0 localModel:(id)a1 context:(id)a2;
- (id)decodeActionShortcut:(id)a0 localModel:(id)a1 context:(id)a2;
- (id)encodeActionAppleMediaAccessoryPower:(id)a0 accessories:(id)a1 context:(id)a2;
- (id)encodeActionCharacteristic:(id)a0 accessories:(id)a1 context:(id)a2;
- (id)encodeActionMediaPlayback:(id)a0 accessories:(id)a1 context:(id)a2;
- (id)encodeActionNaturalLight:(id)a0 accessories:(id)a1 shouldRemoveAction:(BOOL *)a2 context:(id)a3;
- (id)encodeActionShortcut:(id)a0 context:(id)a1;
- (BOOL)exportFromLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;
- (BOOL)importIntoLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;

@end
