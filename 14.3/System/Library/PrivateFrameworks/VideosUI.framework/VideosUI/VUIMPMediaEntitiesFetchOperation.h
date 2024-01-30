@class NSArray, VUIMPMediaLibrary, NSOperationQueue, NSError;

@interface VUIMPMediaEntitiesFetchOperation : VUIAsynchronousOperation

@property (copy, nonatomic) NSArray *requests;
@property (copy, nonatomic) NSArray *responses;
@property (copy, nonatomic) NSError *error;
@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (retain, nonatomic) VUIMPMediaLibrary *mediaLibrary;

- (id)init;
- (void).cxx_destruct;
- (void)executionDidBegin;
- (id)initWithMediaLibrary:(id)a0 requests:(id)a1;

@end
