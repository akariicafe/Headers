@class UILabel;
@protocol SiriUISettingTemplateModel;

@interface SiriUISettingTemplateView : SiriUIBaseTemplateView {
    UILabel *_textLabel;
}

@property (weak, nonatomic) id<SiriUISettingTemplateModel> dataSource;

- (id)initWithDataSource:(id)a0;
- (void)reloadData;
- (void)layoutSubviews;
- (double)desiredHeight;
- (void).cxx_destruct;

@end
