@interface PUSlideshowViewModelChange : PUViewModelChange

@property (nonatomic, setter=_setCurrentStateDidChange:) BOOL currentStateDidChange;
@property (nonatomic, setter=_setWantsChromeVisibleDidChange:) BOOL wantsChromeVisibleDidChange;

- (BOOL)hasChanges;

@end
