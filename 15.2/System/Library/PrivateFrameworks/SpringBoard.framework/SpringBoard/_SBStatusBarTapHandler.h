@class NSURL, _SBStatusBarTapApplicationDestination;

@interface _SBStatusBarTapHandler : NSObject {
    NSURL *_url;
    id /* block */ _block;
    _SBStatusBarTapApplicationDestination *_appDestination;
    _SBStatusBarTapApplicationDestination *_applicationDestination;
}

- (void).cxx_destruct;

@end
