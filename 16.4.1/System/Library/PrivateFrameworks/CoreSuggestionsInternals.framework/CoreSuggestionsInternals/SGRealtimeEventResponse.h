@class NSString, SGCuratedEventKey, SGEntity;

@interface SGRealtimeEventResponse : NSObject

@property (readonly, nonatomic) int state;
@property (readonly, nonatomic) SGEntity *entity;
@property (readonly, nonatomic) SGCuratedEventKey *duplicateEventKey;
@property (readonly, nonatomic) NSString *templateShortName;

- (void).cxx_destruct;
- (id)initCancellationOfCuratedEvent:(id)a0 templateShortName:(id)a1 entity:(id)a2;
- (id)initDuplicateOfCuratedEvent:(id)a0 withEntity:(id)a1;
- (id)initExtractionExceptionWithEntity:(id)a0;
- (id)initNewEventWithEntity:(id)a0;
- (id)initUpdatedEventWithEntity:(id)a0 curatedEventKey:(id)a1;
- (id)initWithEntity:(id)a0 state:(int)a1 duplicateEventKey:(id)a2 templateShortName:(id)a3;

@end
