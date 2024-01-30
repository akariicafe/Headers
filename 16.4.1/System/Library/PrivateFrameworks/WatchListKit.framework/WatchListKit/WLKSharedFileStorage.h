@class NSURL, NSFileCoordinator, NSString;

@interface WLKSharedFileStorage : NSObject {
    NSURL *_fileURL;
    NSFileCoordinator *_coordinator;
    Class _class;
    NSString *_debugString;
}

- (void)read:(id /* block */)a0;
- (void).cxx_destruct;
- (void)delete:(id /* block */)a0;
- (id)_readDataFromURL:(id)a0 error:(id *)a1;
- (BOOL)_writeData:(id)a0 toURL:(id)a1 error:(id *)a2;
- (id)initWithFileName:(id)a0 class:(Class)a1;
- (void)merge:(id)a0 completion:(id /* block */)a1;
- (void)write:(id)a0 completion:(id /* block */)a1;

@end
