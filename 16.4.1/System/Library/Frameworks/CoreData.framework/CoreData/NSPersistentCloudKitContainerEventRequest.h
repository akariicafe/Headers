@class NSFetchRequest;

@interface NSPersistentCloudKitContainerEventRequest : NSPersistentStoreRequest {
    NSFetchRequest *_ckEventFetchRequest;
}

@property long long resultType;

+ (id)fetchEventsAfterDate:(id)a0;
+ (id)fetchEventsAfterEvent:(id)a0;
+ (id)fetchEventsMatchingFetchRequest:(id)a0;
+ (id)fetchRequestForEvents;

- (unsigned long long)requestType;
- (void)dealloc;
- (id)initWithCKEventFetchRequest:(id)a0;

@end
