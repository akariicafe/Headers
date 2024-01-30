@interface CKSyncController : NSObject {
    int _restoreStateChangedToken;
    int _attachmentRestoredToken;
}

@property (nonatomic, getter=isRestoring) BOOL restoring;

+ (id)sharedInstance;

- (void)updateRestoreState;
- (void)attachmentRestored;
- (void)postAttachmentRestored;
- (id)init;
- (void)prioritizeAttachmentAtPath:(id)a0;

@end
