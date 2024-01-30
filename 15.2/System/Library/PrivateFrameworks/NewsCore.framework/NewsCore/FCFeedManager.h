@class NFMutexLock, FCCloudContext, FCMapTable, NSObject;
@protocol OS_dispatch_group, FCFeedPersonalizing;

@interface FCFeedManager : NSObject

@property (retain, nonatomic) FCCloudContext *context;
@property (retain, nonatomic) FCMapTable *feedDescriptorsByID;
@property (retain, nonatomic) NFMutexLock *feedDescriptorsLock;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *forYouPrefetchGroup;
@property (retain, nonatomic) id<FCFeedPersonalizing> feedPersonalizer;

+ (id)_identifierForFeedName:(id)a0;

- (id)feedDescriptorForReadingHistory;
- (id)_feedDescriptorWithIdentifier:(id)a0 forceRecreate:(BOOL)a1 tag:(id)a2;
- (id)feedDescriptorForReadingList;
- (id)initWithCloudContext:(id)a0;
- (id)feedDescriptorForTag:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)feedDescriptorWithIdentifier:(id)a0;
- (id)feedDescriptorForSection:(id)a0 parentChannel:(id)a1;

@end
