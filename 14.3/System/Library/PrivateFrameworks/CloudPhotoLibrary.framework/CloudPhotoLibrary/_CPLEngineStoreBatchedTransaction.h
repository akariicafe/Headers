@class CPLTransaction;

@interface _CPLEngineStoreBatchedTransaction : NSObject {
    CPLTransaction *_dirty;
}

@property (copy, nonatomic) id /* block */ block;
@property (copy, nonatomic) id /* block */ completionHandler;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_releaseDirty;

@end
