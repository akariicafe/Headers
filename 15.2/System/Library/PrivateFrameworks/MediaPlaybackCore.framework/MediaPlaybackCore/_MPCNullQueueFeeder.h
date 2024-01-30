@class NSString;

@interface _MPCNullQueueFeeder : MPQueueFeeder <MPCQueueControllerDataSource> {
    NSString *_uniqueIdentifier;
}

@property (readonly, nonatomic) BOOL containsLiveStream;
@property (readonly, nonatomic) BOOL containsTransportableContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)uniqueIdentifier;
- (void).cxx_destruct;
- (id)init;
- (void)reloadSection:(id)a0 completion:(id /* block */)a1;
- (BOOL)section:(id)a0 supportsShuffleType:(long long)a1;
- (void)loadPlaybackContext:(id)a0 completion:(id /* block */)a1;
- (id)modelPlayEventForItem:(id)a0 inSection:(id)a1;
- (id)identifiersForItem:(id)a0 inSection:(id)a1;
- (id)itemForItem:(id)a0 inSection:(id)a1;
- (BOOL)supportsAutoPlayForItem:(id)a0 inSection:(id)a1;

@end
