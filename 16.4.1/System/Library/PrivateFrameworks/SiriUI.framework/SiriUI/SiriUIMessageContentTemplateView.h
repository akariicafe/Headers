@protocol SiriUIMessageContentTemplateModel;

@interface SiriUIMessageContentTemplateView : SiriUIBaseTemplateView {
    id _textBalloonView;
}

@property (weak, nonatomic) id<SiriUIMessageContentTemplateModel> dataSource;

- (void)reloadData;
- (void)setSemanticContentAttribute:(long long)a0;
- (void)layoutSubviews;
- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (double)desiredHeight;
- (struct CGSize { double x0; double x1; })_textBalloonViewBoundingSize;

@end
