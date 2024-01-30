@class NSURL, NSOperationQueue;

@interface Coherence.CRFileSyncPresenter : NSObject <NSFilePresenter> {
    void /* unknown type, empty encoding */ fileURL;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ manager;
}

@property (nonatomic, readonly) NSURL *presentedItemURL;
@property (nonatomic, readonly) NSOperationQueue *presentedItemOperationQueue;

- (void)presentedItemDidChange;
- (void).cxx_destruct;
- (void)presentedItemDidGainVersion:(id)a0;
- (id)init;

@end
