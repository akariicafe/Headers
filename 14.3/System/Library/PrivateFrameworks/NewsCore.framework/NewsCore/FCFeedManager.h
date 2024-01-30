@class NFMutexLock, FCCloudContext, NSMapTable, NSObject;
@protocol OS_dispatch_group, FCFeedPersonalizing;

@interface FCFeedManager : NSObject

@property (retain, nonatomic) FCCloudContext *context;
@property (retain, nonatomic) NSMapTable *feedDescriptorsByID;
@property (retain, nonatomic) NFMutexLock *feedDescriptorsLock;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *forYouPrefetchGroup;
@property (retain, nonatomic) id<FCFeedPersonalizing> feedPersonalizer;
@property (nonatomic) long long savedStoriesCount;

+ (id)feedDescriptorNameForForYou;
+ (id)feedDescriptorNameForReadingHistory;
+ (id)feedDescriptorNameForReadingList;
+ (id)_identifierForFeedName:(id)a0;

- (id)_feedDescriptorWithIdentifier:(id)a0 forceRecreate:(BOOL)a1 tag:(id)a2;
- (id)init;
- (void).cxx_destruct;
- (id)feedDescriptorForTag:(id)a0;
- (id)feedDescriptorForReadingList;
- (id)initWithCloudContext:(id)a0;
- (id)feedDescriptorWithIdentifier:(id)a0;
- (id)feedDescriptorForArticlesInSameClusterAsArticleID:(id)a0;
- (id)feedDescriptorForForYou;
- (void)notifyWhenForYouPrefetchIsCompleteWithBlock:(id /* block */)a0;
- (id)feedDescriptorForReadingHistory;
- (void)prefetchForYouWithHighPriority:(BOOL)a0 completionHandler:(id /* block */)a1;

@end
