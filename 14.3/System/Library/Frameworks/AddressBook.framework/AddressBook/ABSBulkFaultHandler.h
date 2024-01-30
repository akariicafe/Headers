@class CNFuture, NSMutableSet, ABSAddressBookContextStorage;
@protocol CNScheduler;

@interface ABSBulkFaultHandler : NSObject

@property (readonly, nonatomic) ABSAddressBookContextStorage *storage;
@property (readonly, nonatomic) id<CNScheduler> inlineScheduler;
@property (readonly, nonatomic) CNFuture *contactStoreFuture;
@property (readonly, nonatomic) NSMutableSet *keyDescriptorOfInterests;
@property (nonatomic) long long interest;
@property (nonatomic) double lastRequestTimeStamp;

+ (long long)batchSize;
+ (long long)interestThreshold;
+ (double)interestWindow;

- (id)store;
- (void).cxx_destruct;
- (void)completePerson:(id)a0 withKeysToFetch:(id)a1;
- (id)initWithStorage:(id)a0 contactStoreFuture:(id)a1 schedulerProvider:(id)a2;
- (BOOL)withinInterestWindow;
- (void)resetInterest;
- (id)batchOfPeopleInStorageMissingKeysIncluding:(id)a0;
- (void)completePeople:(id)a0 withKeysToFetch:(id)a1;
- (void)increaseInterest;
- (void)refetchContacts:(id)a0 keysToFetch:(id)a1 handler:(id /* block */)a2;

@end
