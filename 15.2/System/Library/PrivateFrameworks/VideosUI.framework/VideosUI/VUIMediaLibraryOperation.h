@class NSError, VUIAsynchronousWorkToken, VUIMediaLibrary;

@interface VUIMediaLibraryOperation : VUIAsynchronousOperation

@property (retain, nonatomic) VUIMediaLibrary *mediaLibrary;
@property (copy, nonatomic) NSError *error;
@property (retain, nonatomic) VUIAsynchronousWorkToken *asyncWorkToken;

- (void).cxx_destruct;
- (id)init;
- (void)cancel;
- (id)initWithMediaLibrary:(id)a0;

@end
