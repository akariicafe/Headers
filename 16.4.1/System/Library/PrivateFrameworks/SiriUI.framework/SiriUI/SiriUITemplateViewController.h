@class UIView;
@protocol SiriUITemplateModel, SiriUITemplateViewControllerDelegate, SiriUITemplateModelPrivate, SiriUITemplateView;

@interface SiriUITemplateViewController : UIViewController

@property (readonly, nonatomic) id<SiriUITemplateModelPrivate> templateModelPrivate;
@property (weak, nonatomic) id<SiriUITemplateViewControllerDelegate> delegate;
@property (retain, nonatomic) UIView<SiriUITemplateView> *view;
@property (retain, nonatomic) id<SiriUITemplateModel> templateModel;
@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic, getter=isCompressed) BOOL compressed;

+ (id)templateViewControllerForTemplateModel:(id)a0;

- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)loadView;
- (void)prepareForDismissal;
- (id)_initWithTemplateModel:(id)a0;

@end
