@class SiriUIBaseTemplateView;

@interface SiriUIBaseTemplateViewController : SiriUITemplateViewController

@property (retain, nonatomic) SiriUIBaseTemplateView *view;

- (void)loadView;
- (Class)templateViewClass;

@end
