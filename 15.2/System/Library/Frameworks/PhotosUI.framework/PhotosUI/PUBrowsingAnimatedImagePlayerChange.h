@interface PUBrowsingAnimatedImagePlayerChange : PUViewModelChange

@property (nonatomic, setter=_setAnimatedImageDidChange:) BOOL animatedImageDidChange;
@property (nonatomic, setter=_setAnimatedImageLoadingAllowedDidChange:) BOOL animatedImageLoadingAllowedDidChange;

- (BOOL)hasChanges;

@end
