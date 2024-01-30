@class NSString;
@protocol SiriUITemplateModel, SiriUITemplatedView;

@interface SiriUIBaseTemplateView : UIView <SiriUITemplateView>

@property (weak, nonatomic) id<SiriUITemplateModel> dataSource;
@property (weak, nonatomic) id<SiriUITemplatedView> templatedSuperview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDataSource:(id)a0;
- (void)reloadData;
- (double)desiredHeight;
- (void).cxx_destruct;
- (void)removeFromTemplatedSuperview;

@end
