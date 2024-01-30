@class NSString;

@interface AMDAppStoreEvent : NSManagedObject

@property (copy, nonatomic) NSString *adamId;
@property (nonatomic) long long eventTimeMillis;
@property (nonatomic) short eventType;
@property (copy, nonatomic) NSString *sourceSwoosh;
@property (copy, nonatomic) NSString *usecase;
@property (copy, nonatomic) NSString *userId;

+ (short)getEventType:(id)a0;
+ (id)fetchRequest;
+ (id)fetchEvents:(id *)a0;
+ (id)deleteAllEvents:(id *)a0;
+ (id)deleteEventsForPredicate:(id)a0 error:(id *)a1;
+ (id)deleteEventsForUser:(id)a0 error:(id *)a1;
+ (id)deleteEventsOlderThan:(unsigned long long)a0 error:(id *)a1;
+ (id)retrieveEventsOfType:(id)a0 inPeriod:(id)a1 forUser:(id)a2 error:(id *)a3;
+ (unsigned int)saveEvent:(id)a0 forUser:(id)a1 error:(id *)a2;

@end
