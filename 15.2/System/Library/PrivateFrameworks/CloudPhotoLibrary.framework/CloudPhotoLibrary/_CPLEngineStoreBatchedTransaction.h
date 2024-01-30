@class CPLTransaction;

@interface _CPLEngineStoreBatchedTransaction : NSObject {
    CPLTransaction *_dirty;
}

@property (copy, nonatomic) id /* block */ block;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void)_releaseDirty;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
