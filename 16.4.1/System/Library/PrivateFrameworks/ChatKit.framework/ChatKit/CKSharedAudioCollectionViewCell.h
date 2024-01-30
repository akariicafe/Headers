@class UIDateLabel, CKAudioProgressView;

@interface CKSharedAudioCollectionViewCell : CKSharedContentsCollectionViewCell

@property (retain, nonatomic) CKAudioProgressView *audioPlaybackView;
@property (retain, nonatomic) UIDateLabel *previewTitleLabel;

+ (id)reuseIdentifier;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)configureWithAttachmentItem:(id)a0;
- (id)formattedCreatedDateTextFromDate:(id)a0;
- (id)formattedDurationTextForAsset:(id)a0;

@end
