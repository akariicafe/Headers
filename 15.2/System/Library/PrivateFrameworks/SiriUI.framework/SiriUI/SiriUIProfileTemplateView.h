@class UIImageView, NSString;
@protocol SiriUIProfileTemplateModel, SiriUITemplatedView;

@interface SiriUIProfileTemplateView : SiriUILabelStackTemplateView <SiriUITemplateView>

@property (retain, nonatomic) UIImageView *imageView;
@property (weak, nonatomic) id<SiriUIProfileTemplateModel> dataSource;
@property (weak, nonatomic) id<SiriUITemplatedView> templatedSuperview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDataSource:(id)a0;
- (void)reloadData;
- (long long)layoutStyle;
- (void).cxx_destruct;
- (void)layoutImage;

@end
