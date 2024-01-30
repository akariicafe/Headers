@class WLKSharedFileStorage;

@interface WLKUpNextDeltaStore : NSObject {
    WLKSharedFileStorage *_fileStorage;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)merge:(id)a0 completion:(id /* block */)a1;
- (void)delete:(id /* block */)a0;
- (void)write:(id)a0 completion:(id /* block */)a1;
- (void)read:(id /* block */)a0;

@end
