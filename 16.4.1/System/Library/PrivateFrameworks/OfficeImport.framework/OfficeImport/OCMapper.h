@class OCCancel, OITSUTemporaryDirectory;

@interface OCMapper : NSObject {
    OCCancel *mCancel;
    OITSUTemporaryDirectory *mTemporaryDirectoryObject;
}

+ (id)mapperForCurrentThread;

- (void)setup;
- (BOOL)isCancelled;
- (void)cancel;
- (void)teardown;
- (id)init;
- (void).cxx_destruct;
- (void)quit;
- (id)temporaryDirectoryPath;

@end
