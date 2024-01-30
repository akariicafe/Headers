@interface _SBScreenshotPersistenceCoordinator : NSObject {
    unsigned long long _screenshotWriteCount;
}

@property (readonly, nonatomic) BOOL isSaving;

- (BOOL)isSaving;
- (void)saveScreenshot:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)_isWritingSnapshot;
- (void)_incrementWriteCount;
- (void)_finishedWritingScreenshot:(id)a0 didFinishSavingWithError:(id)a1 context:(void *)a2;
- (void)_decrementWriteCount;

@end
