@class NSMutableDictionary;
@protocol MPCQueueItemProviding;

@interface MPCMediaFoundationTranslator : NSObject <MFQueueControlling>

@property (readonly, copy, nonatomic) NSMutableDictionary *mapping;
@property (readonly, nonatomic) id<MPCQueueItemProviding> queueController;

- (void).cxx_destruct;
- (void)resetMapping;
- (id)initWithQueueController:(id)a0;
- (void)setMPAVItem:(id)a0 forMFPlayerItem:(id)a1;
- (id)MPAVItemForMFPlayerItem:(id)a0;
- (id)_MPAVItemForMFPlayerItem:(id)a0 allowReuse:(BOOL)a1;
- (id)itemToFollowItem:(id)a0 direction:(long long)a1 distance:(long long)a2 reason:(long long)a3;
- (id)queueItemForPlayerItem:(id)a0 allowReuse:(BOOL)a1;
- (BOOL)canSkipInDirection:(long long)a0 fromItem:(id)a1;

@end
