@class NSFetchRequest;

@interface NSPersistentCloudKitContainerEventRequest : NSPersistentStoreRequest {
    NSFetchRequest *_ckEventFetchRequest;
}

@property long long resultType;

+ (id)fetchEventsAfterDate:(id)a0;
+ (id)fetchEventsAfterEvent:(id)a0;
+ (id)fetchEventsMatchingFetchRequest:(id)a0;
+ (id)fetchRequestForEvents;

- (void)dealloc;
- (unsigned long long)requestType;
- (id)initWithCKEventFetchRequest:(id)a0;

@end
