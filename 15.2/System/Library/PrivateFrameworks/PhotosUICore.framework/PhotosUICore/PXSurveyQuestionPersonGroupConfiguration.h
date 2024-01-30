@class NSArray, NSString, UIImage, UIView, PXSurveyQuestionConfigurationHandlers;

@interface PXSurveyQuestionPersonGroupConfiguration : NSObject <PXSurveyQuestionConfiguration> {
    UIView *_personGroupContentView;
}

@property (readonly, nonatomic) NSArray *personGroup;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic) UIImage *contentImageForOneUp;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentRectForOneUp;
@property (retain, nonatomic) PXSurveyQuestionConfigurationHandlers *handlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)layoutContentViewInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithTitle:(id)a0 personGroup:(id)a1;
- (id)contentViewForDisplayScale:(double)a0;

@end
