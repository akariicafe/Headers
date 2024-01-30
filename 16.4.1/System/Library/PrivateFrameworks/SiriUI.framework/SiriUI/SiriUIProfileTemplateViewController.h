@class SiriUIProfileTemplateView, NSString;
@protocol SiriUIProfileTemplateModel;

@interface SiriUIProfileTemplateViewController : SiriUIBaseTemplateViewController <SiriUILabelStackTemplateViewDelegate>

@property (retain, nonatomic) id<SiriUIProfileTemplateModel> templateModel;
@property (retain, nonatomic) SiriUIProfileTemplateView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadView;
- (BOOL)labelStackTemplateViewShouldLayoutCompressed:(id)a0;
- (Class)templateViewClass;

@end
