@class NSURL, NSError;

@interface NSFilesystemItemMoveOperation : NSOperation {
    id _delegate;
    NSURL *_sourceURL;
    NSURL *_destinationURL;
    NSError *_error;
    unsigned long long _options;
}

+ (id)filesystemItemMoveOperationWithSourceURL:(id)a0 destinationURL:(id)a1 options:(unsigned long long)a2;
+ (id)_errorWithErrno:(int)a0 sourceURL:(id)a1 destinationURL:(id)a2;

- (id)initWithSourceURL:(id)a0 destinationURL:(id)a1 options:(unsigned long long)a2;
- (void)dealloc;
- (void)main;
- (id)error;
- (void)_setError:(id)a0;
- (void)setDelegate:(id)a0;
- (BOOL)filesystemItemCopyOperation:(id)a0 shouldProceedAfterError:(id)a1 copyingItemAtPath:(id)a2 toPath:(id)a3;
- (id)delegate;

@end
