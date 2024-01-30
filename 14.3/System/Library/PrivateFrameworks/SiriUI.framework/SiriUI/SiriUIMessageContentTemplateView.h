@protocol SiriUIMessageContentTemplateModel;

@interface SiriUIMessageContentTemplateView : SiriUIBaseTemplateView {
    id _textBalloonView;
}

@property (weak, nonatomic) id<SiriUIMessageContentTemplateModel> dataSource;

- (void)reloadData;
- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (void)setSemanticContentAttribute:(long long)a0;
- (double)desiredHeight;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })_textBalloonViewBoundingSize;

@end
