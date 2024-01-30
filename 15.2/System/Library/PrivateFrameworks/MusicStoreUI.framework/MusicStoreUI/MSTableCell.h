@class UIImageView, UIView, MSAudioProgressView, SUPlayerStatus;

@interface MSTableCell : SUTableCell {
    UIImageView *_backsideSnapshotView;
    UIView *_previewContainerView;
    MSAudioProgressView *_previewProgressView;
}

@property (retain, nonatomic) SUPlayerStatus *previewStatus;

- (void)dealloc;
- (void)setPreviewStatus:(id)a0 animated:(BOOL)a1;
- (void)_flipFromPreviewProgressView;
- (void)_destroyPreviewProgressView;
- (void)_flipToPreviewProgressView;

@end
