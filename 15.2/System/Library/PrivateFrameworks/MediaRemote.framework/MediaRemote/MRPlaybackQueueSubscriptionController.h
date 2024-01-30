@class MSVMutableBidirectionalDictionary, MRPlayerPath, NSMutableSet, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface MRPlaybackQueueSubscriptionController : NSObject <NSSecureCoding> {
    NSMutableArray *_requestFilters;
    NSMutableSet *_requests;
    MSVMutableBidirectionalDictionary *_offsets;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) MRPlayerPath *playerPath;

- (id)requestForSubscribedContentItemIdentifier:(id)a0;
- (id)initWithPlayerPath:(id)a0;
- (BOOL)hasRequest:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)restoreStateFromController:(id)a0;
- (id)description;
- (id)contentItemIdentifierForOffset:(long long)a0;
- (void)augmentCommandOptions:(id)a0 forCommand:(unsigned int)a1;
- (void).cxx_destruct;
- (void)removeRequest:(id)a0;
- (void)addRequest:(id)a0;
- (void)subscribeToPlaybackQueue:(id)a0 forRequest:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)enumerateFilteredContentItemsBySubscriptionsForContentItems:(id)a0 block:(id /* block */)a1;
- (void)invalidate;
- (id)filteredContentItemsBySubscriptionsForContentItems:(id)a0;
- (id)offsetForIdentifier:(id)a0;

@end
