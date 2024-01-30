@protocol MSPContainerPersisterDelegate;

@interface MSPContainerPersister : NSObject

@property (weak, nonatomic) id<MSPContainerPersisterDelegate> delegate;
@property (readonly, nonatomic) long long duplicatesPolicy;

- (void).cxx_destruct;
- (void)eraseWithCompletion:(id /* block */)a0;
- (void)fetchStateSnapshotWithCompletion:(id /* block */)a0;
- (void)commitEditWithNewContents:(id)a0 edits:(id)a1 appliedToOldContents:(id)a2 completion:(id /* block */)a3;
- (void)commitByMergingWithStateSnapshot:(id)a0 mergeOptions:(id)a1 completion:(id /* block */)a2;

@end
