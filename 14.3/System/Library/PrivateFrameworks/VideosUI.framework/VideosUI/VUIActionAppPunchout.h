@class NSURL;

@interface VUIActionAppPunchout : VUIAction

@property (readonly, nonatomic) NSURL *punchoutURLWithoutAssociatedPlayable;

- (void).cxx_destruct;
- (id)initWithContextData:(id)a0;
- (void)performWithTargetResponder:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)_openPunchoutURL:(id)a0 isPlaybackURL:(BOOL)a1;

@end
