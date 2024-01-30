@class NSString;

@interface PFUbiquityFileCoordinator : NSFileCoordinator {
    NSString *_localPeerID;
}

- (id)initWithFilePresenter:(id)a0;
- (void)dealloc;
- (BOOL)shouldRetryForError:(id)a0 ignoreFile:(BOOL *)a1;

@end
