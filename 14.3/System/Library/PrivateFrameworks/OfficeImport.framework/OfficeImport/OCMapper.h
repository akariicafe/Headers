@class OCCancel, OITSUTemporaryDirectory;

@interface OCMapper : NSObject {
    OCCancel *mCancel;
    OITSUTemporaryDirectory *mTemporaryDirectoryObject;
}

+ (id)mapperForCurrentThread;

- (void)cancel;
- (void)setup;
- (void)quit;
- (void)teardown;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isCancelled;
- (id)temporaryDirectoryPath;

@end
