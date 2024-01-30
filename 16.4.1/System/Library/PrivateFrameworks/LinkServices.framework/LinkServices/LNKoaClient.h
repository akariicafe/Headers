@class NSString, NSOrderedSet, NSObject;
@protocol OS_dispatch_queue;

@interface LNKoaClient : NSObject <LNVocabularyDonator>

@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSOrderedSet *currentVocabularySet;

- (void).cxx_destruct;
- (id)buildKVItemFrom:(id)a0;
- (id)buildKVItemListWithIncrementalIDs:(id)a0;
- (void)completeSuccessfully:(id /* block */)a0;
- (void)completeWithError:(id)a0 completion:(id /* block */)a1;
- (void)donateFullVocabularySet:(id)a0 completionHandler:(id /* block */)a1;
- (id)getKVItemBuilderFor:(id)a0 itemId:(id)a1;
- (id)initForBundleIdentifier:(id)a0;

@end
