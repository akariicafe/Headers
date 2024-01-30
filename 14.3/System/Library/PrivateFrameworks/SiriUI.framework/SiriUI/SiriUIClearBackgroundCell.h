@class NSString, SiriUISnippetViewController;

@interface SiriUIClearBackgroundCell : UICollectionViewCell <SiriUIReusableView>

@property (weak, nonatomic) SiriUISnippetViewController *snippetViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)defaultHeight;
+ (id)elementKind;
+ (id)reuseIdentifier;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
