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

+ (id)elementKind;
+ (id)reuseIdentifier;
+ (double)defaultHeight;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (double)desiredHeightForWidth:(double)a0;

@end
