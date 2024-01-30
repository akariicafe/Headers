@interface CKSyncController : NSObject {
    int _restoreStateChangedToken;
    int _attachmentRestoredToken;
}

@property (nonatomic, getter=isRestoring) BOOL restoring;

+ (id)sharedInstance;

- (id)init;
- (void)attachmentRestored;
- (void)postAttachmentRestored;
- (void)prioritizeAttachmentAtPath:(id)a0;
- (void)updateRestoreState;

@end
