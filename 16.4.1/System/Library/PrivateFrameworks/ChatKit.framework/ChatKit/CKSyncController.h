@interface CKSyncController : NSObject

@property (nonatomic, getter=isRestoring) BOOL restoring;
@property (nonatomic) int restoreStateChangedToken;
@property (nonatomic) int attachmentRestoredToken;

+ (id)sharedInstance;

- (id)init;
- (void)updateRestoreState;
- (void)attachmentRestored;
- (void)postAttachmentRestored;
- (void)prioritizeAttachmentAtPath:(id)a0;

@end
