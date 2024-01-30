@class NSString, PXSurveyQuestionAssetGroupView, UIImage, UIView, PHAssetCollection, PXSurveyQuestionConfigurationHandlers;

@interface PXSurveyQuestionAssetGroupConfiguration : NSObject <PXSurveyQuestionConfiguration, PXSurveyQuestionAssetGroupViewDelegate> {
    PXSurveyQuestionAssetGroupView *_contentView;
}

@property (readonly, nonatomic) PHAssetCollection *assetCollection;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic) UIImage *contentImageForOneUp;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentRectForOneUp;
@property (retain, nonatomic) PXSurveyQuestionConfigurationHandlers *handlers;
@property (nonatomic) BOOL isStale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 assetCollection:(id)a1;
- (void)layoutContentViewInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)px_surveyQuestionAssetGroupViewWasTapped:(id)a0;

@end
