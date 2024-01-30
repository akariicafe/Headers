@class MSPCloudSynchronizer, NSString, MSPContainer, MSPCloudContainer;

@interface MSPSynchronizedContainer : NSObject <MSPContainerObserver, MSPCloudContainerObserver>

@property (weak, nonatomic) MSPCloudSynchronizer *synchronizer;
@property (retain, nonatomic) MSPContainer *container;
@property (retain, nonatomic) MSPCloudContainer *cloudContainer;
@property (nonatomic) BOOL requiresMerge;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cloudContainerDidChange:(id)a0;
- (void).cxx_destruct;
- (void)container:(id)a0 didEditWithNewContents:(id)a1 orderedEdits:(id)a2 cause:(long long)a3 context:(id)a4;
- (void)containerDidEraseContents:(id)a0 fromStorageTypes:(unsigned long long)a1;
- (void)mergeWithGroup:(id)a0 completion:(id /* block */)a1;
- (void)cancelMergeWithError:(id)a0;
- (id)initWithContainer:(id)a0 synchronizer:(id)a1;
- (void)setRequiresMerge:(BOOL)a0 withReason:(unsigned long long)a1;
- (void)prepareCloudWithGroup:(id)a0 completion:(id /* block */)a1;

@end
