@class NSURL, TUDialRequest;

@interface SBLockScreenPluginCallAction : SBLockScreenPluginAction {
    TUDialRequest *_dialRequest;
}

@property (readonly, nonatomic) NSURL *url;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (id)url;
- (BOOL)isCallAction;

@end
