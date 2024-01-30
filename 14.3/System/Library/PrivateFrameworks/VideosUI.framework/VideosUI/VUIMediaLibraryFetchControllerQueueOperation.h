@class NSArray;

@interface VUIMediaLibraryFetchControllerQueueOperation : VUIAsynchronousOperation

@property (copy, nonatomic) NSArray *fetchControllers;
@property (nonatomic) unsigned long long mediaLibraryRevision;

- (id)init;
- (void).cxx_destruct;
- (void)executionDidBegin;
- (id)initWithFetchControllers:(id)a0 mediaLibraryRevision:(unsigned long long)a1;

@end
