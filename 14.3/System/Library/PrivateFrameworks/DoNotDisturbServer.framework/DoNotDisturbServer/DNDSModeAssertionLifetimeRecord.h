@class NSString, NSNumber;

@interface DNDSModeAssertionLifetimeRecord : NSObject <DNDSModeAssertionStoreRecordDictionaryEncoding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *lifetimeType;
@property (retain, nonatomic) NSString *eventUniqueID;
@property (retain, nonatomic) NSNumber *occurrenceDate;
@property (retain, nonatomic) NSNumber *onlyDuringEvent;
@property (retain, nonatomic) NSNumber *startDate;
@property (retain, nonatomic) NSNumber *endDate;
@property (retain, nonatomic) NSString *scheduleIdentifier;
@property (retain, nonatomic) NSString *behavior;

+ (id)recordForDictionary:(id)a0 keys:(const struct { struct { id x0; id x1; id x2; } x0; struct { id x0; id x1; id x2; id x3; } x1; struct { id x0; id x1; id x2; id x3; } x2; struct { id x0; id x1; id x2; id x3; id x4; id x5; id x6; id x7; } x3; struct { id x0; id x1; } x4; struct { id x0; id x1; id x2; id x3; id x4; id x5; } x5; struct { id x0; } x6; struct { id x0; id x1; id x2; id x3; id x4; id x5; id x6; } x7; struct { id x0; id x1; id x2; id x3; } x8; } *)a1;
+ (id)recordForAssertionLifetime:(id)a0;

- (void).cxx_destruct;
- (id)object;
- (id)dictionaryWithKeys:(const struct { struct { id x0; id x1; id x2; } x0; struct { id x0; id x1; id x2; id x3; } x1; struct { id x0; id x1; id x2; id x3; } x2; struct { id x0; id x1; id x2; id x3; id x4; id x5; id x6; id x7; } x3; struct { id x0; id x1; } x4; struct { id x0; id x1; id x2; id x3; id x4; id x5; } x5; struct { id x0; } x6; struct { id x0; id x1; id x2; id x3; id x4; id x5; id x6; } x7; struct { id x0; id x1; id x2; id x3; } x8; } *)a0 options:(unsigned long long)a1;

@end
