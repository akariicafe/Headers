@class NSURL, GKPlayer;

@interface GKReportProblemRemoteUIController : GKRemoteUIController

@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) GKPlayer *problemPlayer;

+ (id)controllerForProblemPlayer:(id)a0 completionHandler:(id /* block */)a1;

- (id)bagKey;
- (id)fallbackURL;
- (id)initWithProblemPlayer:(id)a0;
- (void).cxx_destruct;
- (int)preferredLayoutStyle;
- (id)postBodyForInitialLoad;

@end
