@interface CAMFlashStatusIndicator : CAMControlStatusIndicator

@property (nonatomic) long long flashMode;
@property (nonatomic, getter=isFlashActive) BOOL flashActive;
@property (nonatomic, getter=isFlashUnavailable) BOOL flashUnavailable;

- (id)imageNameForCurrentState;
- (BOOL)shouldUseActiveTintForCurrentState;
- (BOOL)shouldShowSlashForCurrentState;
- (BOOL)shouldFillOutlineForCurrentState;
- (BOOL)shouldUseSlash;
- (id)imageNameForAXHUD;
- (void)setFlashMode:(long long)a0 animated:(BOOL)a1;

@end
