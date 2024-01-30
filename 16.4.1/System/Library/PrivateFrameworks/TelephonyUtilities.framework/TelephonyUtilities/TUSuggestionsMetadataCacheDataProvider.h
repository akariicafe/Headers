@class NSObject;
@protocol OS_dispatch_semaphore, SGSuggestionsServiceContactsProtocol;

@interface TUSuggestionsMetadataCacheDataProvider : TUMetadataCacheDataProvider

@property (class, readonly, nonatomic) id<SGSuggestionsServiceContactsProtocol> sharedService;

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *suggestionsServiceThrottleSemaphore;
@property (readonly, nonatomic) id suggestionsContactsObserver;

+ (id)suggestedNamesForDestinationID:(id)a0 onlySignificant:(BOOL)a1 error:(id *)a2;
+ (id)newestSuggestedContactForDestinationID:(id)a0;
+ (void)suggestedNamesForDestinationID:(id)a0 onlySignificant:(BOOL)a1 withCompletion:(id /* block */)a2;
+ (BOOL)canUseSiriSuggestions;

- (void)updateCacheWithDestinationIDs:(id)a0 withGroup:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
