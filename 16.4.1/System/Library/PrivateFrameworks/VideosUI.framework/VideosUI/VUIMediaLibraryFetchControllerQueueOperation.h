@class NSArray;

@interface VUIMediaLibraryFetchControllerQueueOperation : VUIAsynchronousOperation

@property (copy, nonatomic) NSArray *fetchControllers;
@property (nonatomic) unsigned long long mediaLibraryRevision;

- (void)executionDidBegin;
- (id)init;
- (void).cxx_destruct;
- (id)initWithFetchControllers:(id)a0 mediaLibraryRevision:(unsigned long long)a1;

@end
