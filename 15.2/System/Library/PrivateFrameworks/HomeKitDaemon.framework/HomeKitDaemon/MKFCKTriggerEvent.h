@class NSPredicate, NSArray, NSSet;

@interface MKFCKTriggerEvent : MKFCKTrigger

@property (retain, nonatomic) NSPredicate *condition;
@property (retain, nonatomic) NSArray *events;
@property (retain, nonatomic) NSSet *accessories;
@property (retain, nonatomic) NSSet *users;

+ (id)fetchRequest;

- (BOOL)importIntoLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;
- (BOOL)exportFromLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;
- (id)_encodeEvent:(id)a0 accessories:(id)a1 users:(id)a2 context:(id)a3;
- (id)_decodeEventDictionary:(id)a0 localModel:(id)a1 context:(id)a2;

@end
