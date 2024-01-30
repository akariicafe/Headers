@protocol SiriUIMessageContentTemplateModel;

@interface SiriUIMessageContentTemplateView : SiriUIBaseTemplateView {
    id _textBalloonView;
}

@property (weak, nonatomic) id<SiriUIMessageContentTemplateModel> dataSource;

- (id)initWithDataSource:(id)a0;
- (void)reloadData;
- (void)layoutSubviews;
- (double)desiredHeight;
- (void)setSemanticContentAttribute:(long long)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })_textBalloonViewBoundingSize;

@end
