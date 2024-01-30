@class NSURL, NSFileCoordinator, NSString;

@interface WLKSharedFileStorage : NSObject {
    NSURL *_fileURL;
    NSFileCoordinator *_coordinator;
    Class _class;
    NSString *_debugString;
}

- (BOOL)_writeData:(id)a0 toURL:(id)a1 error:(id *)a2;
- (id)_readDataFromURL:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)merge:(id)a0 completion:(id /* block */)a1;
- (void)delete:(id /* block */)a0;
- (id)initWithFileName:(id)a0 class:(Class)a1;
- (void)write:(id)a0 completion:(id /* block */)a1;
- (void)read:(id /* block */)a0;

@end
