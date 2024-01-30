@class UILabel, NSString, UIActivityIndicatorView;
@protocol SiriUIActivityIndicatorTemplateModel, SiriUITemplatedView;

@interface SiriUIActivityIndicatorTemplateView : SiriUIBaseTemplateView <SiriUITemplateView>

@property (retain, nonatomic) UILabel *detailTextLabel;
@property (retain, nonatomic) UIActivityIndicatorView *spinnerView;
@property (weak, nonatomic) id<SiriUIActivityIndicatorTemplateModel> dataSource;
@property (weak, nonatomic) id<SiriUITemplatedView> templatedSuperview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDataSource:(id)a0;
- (void)reloadData;
- (void)layoutSubviews;
- (double)desiredHeight;
- (void).cxx_destruct;

@end
