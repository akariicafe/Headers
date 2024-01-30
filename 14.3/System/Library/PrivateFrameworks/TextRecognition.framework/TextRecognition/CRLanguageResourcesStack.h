@class NSString, NSMutableSet, NSMutableArray, NSObject;
@protocol OS_dispatch_semaphore;

@interface CRLanguageResourcesStack : NSObject

@property long long totalResources;
@property (retain) NSMutableArray *availableResources;
@property (retain) NSString *localeIdentifier;
@property (retain) NSObject<OS_dispatch_semaphore> *resourceCountSemaphore;
@property (retain) NSMutableSet *subscribers;

- (void).cxx_destruct;
- (id)initWithLocaleIdentifier:(id)a0;
- (void)removeSubscriber:(id)a0;
- (void)addSubscriber:(id)a0;
- (long long)subscriberCount;
- (id)popResource;
- (void)pushResource:(id)a0;
- (BOOL)hasSubscriber:(id)a0;

@end
