@interface _SBScreenshotPersistenceCoordinator : NSObject {
    unsigned long long _screenshotWriteCount;
}

@property (readonly, nonatomic) BOOL isSaving;

- (BOOL)isSaving;
- (void)_decrementWriteCount;
- (void)_finishedWritingScreenshot:(id)a0 didFinishSavingWithError:(id)a1 context:(void *)a2;
- (void)_incrementWriteCount;
- (BOOL)_isWritingSnapshot;
- (void)saveScreenshot:(id)a0 withCompletion:(id /* block */)a1;

@end
