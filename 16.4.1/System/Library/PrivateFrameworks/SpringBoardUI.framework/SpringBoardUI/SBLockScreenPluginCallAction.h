@class NSURL, TUDialRequest;

@interface SBLockScreenPluginCallAction : SBLockScreenPluginAction {
    TUDialRequest *_dialRequest;
}

@property (readonly, nonatomic) NSURL *url;

- (id)initWithURL:(id)a0;
- (id)url;
- (void).cxx_destruct;
- (BOOL)isCallAction;

@end
