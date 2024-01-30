@class SiriUISelectionTemplateView;
@protocol SiriUISelectionTemplateViewControllerDelegate, SiriUISelectionTemplateModel;

@interface SiriUISelectionTemplateViewController : SiriUISettingTemplateViewController

@property (weak, nonatomic) id<SiriUISelectionTemplateViewControllerDelegate> delegate;
@property (retain, nonatomic) id<SiriUISelectionTemplateModel> templateModel;
@property (retain, nonatomic) SiriUISelectionTemplateView *view;
@property (nonatomic) BOOL selected;

- (void)loadView;
- (void)_didSelectChoiceFromSender:(id)a0;
- (Class)templateViewClass;

@end
