@class UILabel;
@protocol SiriUISettingTemplateModel;

@interface SiriUISettingTemplateView : SiriUIBaseTemplateView {
    UILabel *_textLabel;
}

@property (weak, nonatomic) id<SiriUISettingTemplateModel> dataSource;

- (void)reloadData;
- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (double)desiredHeight;
- (void)layoutSubviews;

@end
