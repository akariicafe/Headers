@class NSString, SiriUISnippetViewController;

@interface SiriUIReusableFooterView : UICollectionReusableView <SiriUIReusableView>

@property (weak, nonatomic) SiriUISnippetViewController *snippetViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)defaultHeight;
+ (id)elementKind;
+ (id)reuseIdentifier;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsets;

@end
