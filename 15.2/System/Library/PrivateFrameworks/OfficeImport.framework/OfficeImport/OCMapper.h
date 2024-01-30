@class OCCancel, OITSUTemporaryDirectory;

@interface OCMapper : NSObject {
    OCCancel *mCancel;
    OITSUTemporaryDirectory *mTemporaryDirectoryObject;
}

+ (id)mapperForCurrentThread;

- (void)teardown;
- (void)quit;
- (void)setup;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isCancelled;
- (void)cancel;
- (id)temporaryDirectoryPath;

@end
