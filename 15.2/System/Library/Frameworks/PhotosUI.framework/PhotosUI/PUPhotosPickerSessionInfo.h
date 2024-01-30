@interface PUPhotosPickerSessionInfo : PUSessionInfo

- (id)localizedPrompt;
- (BOOL)isSelectingAssets;
- (id)initWithTargetAlbum:(id)a0;
- (id)initWithTargetAlbumName:(id)a0;
- (id)_initWithTargetAlbum:(id)a0 orTargetAlbumName:(id)a1;

@end
