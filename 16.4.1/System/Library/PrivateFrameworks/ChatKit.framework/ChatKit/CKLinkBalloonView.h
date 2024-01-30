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
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_linkViewMetadataDidBecomeComplete:(id)a0;
- (void)linkViewNeedsResize:(id)a0;
- (void)setIsIrisAsset:(BOOL)a0;
- (BOOL)isIrisAsset;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;

@end
