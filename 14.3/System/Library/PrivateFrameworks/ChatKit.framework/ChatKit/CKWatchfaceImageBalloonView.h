@class NSString, LPLinkMetadata, LPLinkView;

@interface CKWatchfaceImageBalloonView : CKImageBalloonView <LPLinkViewDelegate> {
    BOOL _isIrisAsset;
}

@property (retain, nonatomic) LPLinkView *linkView;
@property (retain, nonatomic) LPLinkMetadata *metadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)configureForMediaObject:(id)a0 previewWidth:(double)a1 orientation:(char)a2 hasInvisibleInkEffect:(BOOL)a3;
- (void)prepareForReuse;
- (BOOL)isIrisAsset;
- (void)layoutSubviews;
- (void)linkViewNeedsResize:(id)a0;
- (void)_linkViewMetadataDidBecomeComplete:(id)a0;
- (void)setIsIrisAsset:(BOOL)a0;
- (void)tapGestureRecognized:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;

@end
