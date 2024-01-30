@class NSTimeZone, NSString, NSDateComponents, NSDate;

@interface MKFCKTriggerTimer : MKFCKTrigger

@property (copy, nonatomic) NSDate *fireDate;
@property (retain, nonatomic) NSTimeZone *fireDateTimeZone;
@property (retain, nonatomic) NSDateComponents *fireRepeatInterval;
@property (copy, nonatomic) NSString *significantEvent;
@property (retain, nonatomic) NSDateComponents *significantEventOffset;

+ (id)fetchRequest;

- (BOOL)importIntoLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;
- (BOOL)exportFromLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;

@end
