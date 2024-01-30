@class NUArticleExcerptReadMoreButton, UIView, UILabel, NUArticleExcerptTraits, UIScrollView, UIImageView, NSString, TFMultiDelegate, WKWebView;
@protocol UIScrollViewDelegate;

@interface NUArticleExcerptView : UIView <UIScrollViewDelegate>

@property (readonly, nonatomic) UIImageView *headlineImageView;
@property (readonly, nonatomic) UIView *hairlineSeparatorView;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic) TFMultiDelegate *multiDelegate;
@property (copy, nonatomic) NUArticleExcerptTraits *traits;
@property (readonly, nonatomic) UILabel *headlineTitleLabel;
@property (readonly, nonatomic) UILabel *headlineDateLabel;
@property (readonly, nonatomic) WKWebView *excerptWebView;
@property (readonly, nonatomic) NUArticleExcerptReadMoreButton *readMoreButton;
@property (weak, nonatomic) id<UIScrollViewDelegate> delegate;
@property (readonly, nonatomic) UIScrollView *contentScrollView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)webViewConfiguration;

- (id)initWithTraits:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)updateImageAspectRatio;
- (void)updateWithHeadlineImage:(id)a0;

@end
