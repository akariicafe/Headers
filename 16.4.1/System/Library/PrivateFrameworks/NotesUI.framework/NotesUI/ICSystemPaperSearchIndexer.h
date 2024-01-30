@interface ICSystemPaperSearchIndexer : NSObject {
    void /* unknown type, empty encoding */ titleQueries;
    void /* unknown type, empty encoding */ $__lazy_storage_$_workerQueueQoS;
    void /* unknown type, empty encoding */ $__lazy_storage_$_workerQueue;
}

@property (class, nonatomic, readonly) ICSystemPaperSearchIndexer *shared;

- (id)init;
- (void).cxx_destruct;
- (void)updateIndexForAttachment:(id)a0;

@end
