@class UIImageView, UIButton;
@protocol SiriUISelectionTemplateModel;

@interface SiriUISelectionTemplateView : SiriUISettingTemplateView {
    UIImageView *_checkmarkImageView;
    UIButton *_selectionButton;
}

@property (weak, nonatomic) id<SiriUISelectionTemplateModel> dataSource;

- (id)initWithDataSource:(id)a0;
- (void)reloadData;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)addTargetForSelectionEvent:(id)a0 action:(SEL)a1;
- (void)removeTargetForSelectionEvent:(id)a0 action:(SEL)a1;

@end
