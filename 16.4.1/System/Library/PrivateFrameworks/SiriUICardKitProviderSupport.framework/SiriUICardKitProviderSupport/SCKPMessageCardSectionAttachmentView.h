@class LPLinkMetadata, UIView, UIImageView, NSString, SCKPGradientView, UILabel, LPLinkView;
@protocol SCKPMessageCardSectionAttachmentViewDelegate;

@interface SCKPMessageCardSectionAttachmentView : UIView <LPLinkViewDelegate>

@property (retain) SCKPGradientView *gradientView;
@property (retain) LPLinkMetadata *fullMetadata;
@property (retain) LPLinkView *linkView;
@property (retain) UIImageView *imageView;
@property (retain) UIImageView *livePhotoBadge;
@property (retain) UILabel *videoDurationLabel;
@property (retain) UIView *imageContainer;
@property unsigned long long alignmentStyle;
@property (weak) id<SCKPMessageCardSectionAttachmentViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_handleTap:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_linkViewMetadataDidBecomeComplete:(id)a0;
- (id)initWithAttachment:(id)a0;
- (void)_loadAttachment:(id)a0;
- (void)_loadAttachmentFromFileURL:(id)a0 type:(int)a1;
- (void)_loadLinkWith:(id)a0 metadata:(id)a1;
- (id)_thumbnailImageForVideoURL:(id)a0;
- (struct CGSize { double x0; double x1; })_translateImageSizeForMaxSize:(struct CGSize { double x0; double x1; })a0;
- (id)_videoDurationStringForVideoURL:(id)a0;

@end
