@class PHAssetCollection, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, PXSurveyQuestionAssetGroupViewDelegate;

@interface PXSurveyQuestionAssetGroupView : UIView {
    double _imagePadding;
}

@property (readonly, nonatomic) PHAssetCollection *assetCollection;
@property (retain, nonatomic) NSMutableArray *imageViews;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *imageViewsQueue;
@property (weak, nonatomic) id<PXSurveyQuestionAssetGroupViewDelegate> delegate;

- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupViews;
- (void).cxx_destruct;
- (id)initWithAssetCollection:(id)a0;
- (void)_handleViewTap;
- (id)_imageViewForPosition:(unsigned char)a0 totalViewCount:(unsigned char)a1;
- (void)_loadImagesFromCollection;
- (unsigned char)getHorizontalViewCountForTotalNumberOfViews:(unsigned char)a0;
- (unsigned char)getVerticalViewCountForTotalNumberOfViews:(unsigned char)a0;
- (double)minXPositionForViewPosition:(unsigned char)a0 totalNumberOfViews:(unsigned char)a1;
- (double)minYPositionForViewPosition:(unsigned char)a0 totalNumberOfViews:(unsigned char)a1;
- (void)setFrameForSubview:(id)a0 inPosition:(unsigned char)a1;

@end
