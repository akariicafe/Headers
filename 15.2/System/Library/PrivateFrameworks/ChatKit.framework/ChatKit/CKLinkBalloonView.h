@class NSString, LPLinkView;

@interface CKLinkBalloonView : CKImageBalloonView <LPLinkViewDelegate> {
    BOOL _isIrisAsset;
}

@property (retain, nonatomic) LPLinkView *linkView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prepareForDisplay;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (BOOL)isIrisAsset;
- (void)setIsIrisAsset:(BOOL)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)linkViewNeedsResize:(id)a0;
- (void)_linkViewMetadataDidBecomeComplete:(id)a0;

@end
