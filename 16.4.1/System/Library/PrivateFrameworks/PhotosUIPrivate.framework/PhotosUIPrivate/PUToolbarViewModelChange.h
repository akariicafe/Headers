@interface PUToolbarViewModelChange : PUViewModelChange

@property (nonatomic, setter=_setToolbarItemsChanged:) BOOL toolbarItemsChanged;
@property (nonatomic, setter=_setAccessoryViewChanged:) BOOL accessoryViewChanged;
@property (nonatomic, setter=_setAccessoryViewTopOutsetChanged:) BOOL accessoryViewTopOutsetChanged;
@property (nonatomic, setter=_setAccessoryViewMaximumHeightChanged:) BOOL accessoryViewMaximumHeightChanged;
@property (nonatomic, setter=_setMaximumHeightChanged:) BOOL maximumHeightChanged;

- (BOOL)hasChanges;

@end
