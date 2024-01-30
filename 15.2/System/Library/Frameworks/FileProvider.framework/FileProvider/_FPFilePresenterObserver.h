@class NSFileProviderManager;

@interface _FPFilePresenterObserver : NSObject <FPFilePresenterObserver>

@property (weak) NSFileProviderManager *parentConnection;

- (void).cxx_destruct;
- (void)observePresentedFilesDidChange:(id)a0;

@end
