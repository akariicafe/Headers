@class NSError, NSObject, MPMediaLibrary;
@protocol OS_dispatch_source;

@interface VUIMPMediaLibraryConnectOperation : VUIAsynchronousOperation

@property (nonatomic) BOOL success;
@property (copy, nonatomic) NSError *error;
@property (retain, nonatomic) MPMediaLibrary *mediaLibrary;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *progressTimer;
@property (copy, nonatomic) id /* block */ progressBlock;

- (void)executionDidBegin;
- (void).cxx_destruct;
- (id)init;
- (id)initWithMediaLibrary:(id)a0;
- (void)_startProgressTimer;
- (void)_stopProgressTimer;
- (void)_notifyClientOfProgress:(float)a0;

@end
