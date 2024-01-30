@interface PUPhotoEditIrisModelChange : PUViewModelChange

@property (nonatomic, setter=_setVideoEnabledDidChange:) BOOL videoEnabledDidChange;

- (BOOL)hasChanges;

@end
