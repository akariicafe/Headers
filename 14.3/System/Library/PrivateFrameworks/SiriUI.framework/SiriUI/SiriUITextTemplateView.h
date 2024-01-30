@class NSString, UIImageView, UILabel, UIButton;
@protocol SiriUITextTemplateModel, SiriUITemplatedView;

@interface SiriUITextTemplateView : SiriUILabelStackTemplateView <SiriUITemplateView>

@property (retain, nonatomic) UIImageView *chevronView;
@property (retain, nonatomic) UILabel *detailTextLabel;
@property (weak) id<SiriUITextTemplateModel> dataSource;
@property (retain, nonatomic) UIButton *disclosureButton;
@property (weak, nonatomic) id<SiriUITemplatedView> templatedSuperview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reloadData;
- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)layoutDetailText;
- (void)setupDisclosureIndicator;
- (void)_setupDisclosureButton;
- (void)addTargetForDisclosure:(id)a0 action:(SEL)a1;
- (void)removeTargetForDisclosure:(id)a0 action:(SEL)a1;

@end
