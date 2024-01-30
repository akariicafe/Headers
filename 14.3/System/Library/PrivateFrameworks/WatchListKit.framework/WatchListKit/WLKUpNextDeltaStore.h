@class NSURL;

@interface WLKUpNextDeltaStore : NSObject {
    NSURL *_fileURL;
}

+ (id)sharedInstance;

- (void)delete:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (void)read:(id /* block */)a0;
- (id)_readDeltaFromURL:(id)a0 error:(id *)a1;
- (BOOL)_writeDelta:(id)a0 toURL:(id)a1 error:(id *)a2;
- (void)write:(id)a0 completion:(id /* block */)a1;
- (void)merge:(id)a0 completion:(id /* block */)a1;

@end
