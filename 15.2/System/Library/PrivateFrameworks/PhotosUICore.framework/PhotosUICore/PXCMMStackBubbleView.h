@class PXPhotoKitUIMediaProvider, NSString, PXMessagesStackView, PXPhotoKitAssetsDataSourceManager, UIActivityIndicatorView, PHMomentShare;

@interface PXCMMStackBubbleView : UIView <PXAssetsDataSourceManagerObserver> {
    PXMessagesStackView *_stackView;
    UIActivityIndicatorView *_activityIndicatorView;
}

@property (retain, nonatomic) PXPhotoKitAssetsDataSourceManager *dataSourceManager;
@property (retain, nonatomic) PHMomentShare *momentShare;
@property (readonly, nonatomic) PXPhotoKitUIMediaProvider *mediaProvider;
@property (nonatomic) double maximumHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)initWithCoder:(id)a0;
- (void)_updateSubviews;

@end
