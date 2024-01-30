@class NSString, UILabel, SiriUISnippetViewController;

@interface SiriUISashHeaderView : UICollectionReusableView <SiriUIReusableView, SiriUISizableHeaderView> {
    UILabel *_headerLabel;
}

@property (copy, nonatomic) NSString *titleText;
@property (weak, nonatomic) SiriUISnippetViewController *snippetViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)defaultHeight;
+ (id)elementKind;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (double)desiredHeightForWidth:(double)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
