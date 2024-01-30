@class NSFetchRequest;

@interface NSPersistentCloudKitContainerEventRequest : NSPersistentStoreRequest

@property (retain, nonatomic) NSFetchRequest *ckEventFetchRequest;
@property long long resultType;

+ (id)ckEventKeyForKey:(id)a0;
+ (id)validateClientFetchRequest:(id)a0;
+ (id)translatePredicate:(id)a0 orReturnFailureReason:(id *)a1;
+ (id)fetchEventsAfterDate:(id)a0;
+ (id)translateExpression:(id)a0 orReturnFailureReason:(id *)a1;
+ (id)fetchEventsAfterEvent:(id)a0;
+ (id)fetchRequestForEvents;
+ (id)fetchEventsMatchingFetchRequest:(id)a0;

- (unsigned long long)requestType;
- (void)dealloc;
- (id)initWithCKEventFetchRequest:(id)a0;

@end
