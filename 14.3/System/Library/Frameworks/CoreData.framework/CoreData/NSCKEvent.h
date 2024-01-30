@class NSString, NSUUID, NSDate;

@interface NSCKEvent : NSManagedObject

@property (class, readonly, nonatomic) NSString *entityPath;

@property (retain, nonatomic) NSUUID *eventIdentifier;
@property (nonatomic) long long cloudKitEventType;
@property (retain, nonatomic) NSDate *startedAt;
@property (retain, nonatomic) NSDate *endedAt;
@property (nonatomic) BOOL succeeded;
@property (retain, nonatomic) NSString *errorDomain;
@property (nonatomic) long long errorCode;
@property (nonatomic) long long countAffectedObjects;
@property (nonatomic) long long countFinishedObjects;

+ (id)finishEventForResult:(id)a0 withMonitor:(id)a1 error:(id *)a2;
+ (id)fetchExistingEventWithIdentifier:(id)a0 inStore:(id)a1 withManagedObjectContext:(id)a2 error:(id *)a3;
+ (id)beginEventForRequest:(id)a0 withMonitor:(id)a1 error:(id *)a2;
+ (long long)eventTypeForRequest:(id)a0;

@end
