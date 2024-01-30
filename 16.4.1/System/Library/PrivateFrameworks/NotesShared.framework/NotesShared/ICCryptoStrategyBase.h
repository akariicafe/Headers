@class ICCloudSyncingObject;

@interface ICCryptoStrategyBase : NSObject

@property (weak, nonatomic) ICCloudSyncingObject *object;

- (void).cxx_destruct;
- (void)performBlockIfAttachmentExists:(id /* block */)a0;
- (id)initWithCloudSyncingObject:(id)a0;
- (void)invalidateStrategy;
- (void)performBlockIfAccountExists:(id /* block */)a0;
- (void)performBlockIfMediaExists:(id /* block */)a0;
- (void)performBlockIfNoteExists:(id /* block */)a0;
- (void)performBlockIfObjectExists:(id /* block */)a0;
- (void)performBlockIfPreviewImageExists:(id /* block */)a0;

@end
