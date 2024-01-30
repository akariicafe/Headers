@class NSString, UIImage, UIView, PXSurveyQuestionConfigurationHandlers, PXDisplayAssetUIView;
@protocol PXDisplayAsset;

@interface PXSurveyQuestionAssetConfiguration : NSObject <PXSurveyQuestionConfiguration> {
    PXDisplayAssetUIView *_assetView;
}

@property (readonly, nonatomic) id<PXDisplayAsset> asset;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } assetContentsRect;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic) UIImage *contentImageForOneUp;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentRectForOneUp;
@property (retain, nonatomic) PXSurveyQuestionConfigurationHandlers *handlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutContentViewInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithTitle:(id)a0 asset:(id)a1;
- (void)_handleDidSelectAssetView;

@end
