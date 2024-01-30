@class NSString;

@interface PFUbiquityFileCoordinator : NSFileCoordinator {
    NSString *_localPeerID;
}

- (BOOL)shouldRetryForError:(id)a0 ignoreFile:(BOOL *)a1;
- (id)initWithFilePresenter:(id)a0;
- (void)dealloc;

@end
