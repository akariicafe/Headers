@class NSArray, NSHashTable, NSURL, NSObject;
@protocol OS_dispatch_queue, NTKArgonLocalKeyDatabaseProviding, NTKArgonExtractorProviding;

@interface NTKArgonManager : NSObject

@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) id<NTKArgonLocalKeyDatabaseProviding> keyDatabase;
@property (readonly, nonatomic) NSArray *fetchers;
@property (readonly, nonatomic) id<NTKArgonExtractorProviding> extractor;
@property (readonly, nonatomic) NSURL *assetDestinationURL;

- (void).cxx_destruct;
- (id)initWithKeyDatabase:(id)a0 fetchers:(id)a1 extractor:(id)a2 assetDestinationURL:(id)a3;
- (void)addArgonManagerObserver:(id)a0;
- (void)extractKnownKeyDescriptorsIfNeededWithCompletion:(id /* block */)a0;
- (void)refreshWithReason:(long long)a0;
- (id)_queue_extractedKeyDescriptors;
- (void)_queue_extractKnownKeyDescriptorsIfNeededWithCompletion:(id /* block */)a0;
- (void)removeArgonManagerObserver:(id)a0;

@end
