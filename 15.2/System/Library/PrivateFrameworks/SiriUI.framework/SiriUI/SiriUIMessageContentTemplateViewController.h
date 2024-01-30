@class SiriUIMessageContentTemplateView;
@protocol SiriUIMessageContentTemplateModel;

@interface SiriUIMessageContentTemplateViewController : SiriUIBaseTemplateViewController

@property (retain, nonatomic) SiriUIMessageContentTemplateView *view;
@property (retain, nonatomic) id<SiriUIMessageContentTemplateModel> templateModel;

- (Class)templateViewClass;

@end
