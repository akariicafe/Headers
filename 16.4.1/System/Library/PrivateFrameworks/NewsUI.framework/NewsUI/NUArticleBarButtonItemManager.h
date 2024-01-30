@class NUArticleNextButton, UIViewController, UIBarButtonItem;
@protocol NUArticleBarButtonItemManagerDelegate;

@interface NUArticleBarButtonItemManager : NSObject

@property (readonly, weak, nonatomic) UIViewController *viewController;
@property (readonly, nonatomic) NUArticleNextButton *nextButton;
@property (retain, nonatomic) UIBarButtonItem *shareBarButtonItem;
@property (retain, nonatomic) UIBarButtonItem *doneBarButtonItem;
@property (readonly, nonatomic) UIBarButtonItem *nextBarButtonItem;
@property (weak, nonatomic) id<NUArticleBarButtonItemManagerDelegate> delegate;

- (id)initWithViewController:(id)a0;
- (void).cxx_destruct;
- (void)doNext:(id)a0;
- (void)doDone:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustedFrameForDoneBarButtonItemForTraitCollection:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustedFrameForNextArticleButtonForTraitCollection:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustedFrameForShareBarButtonItemForTraitCollection:(id)a0;
- (void)applyPageStyleToNextBarButtonItem:(id)a0;
- (id)createDoneBarButtonItem;
- (id)createFlexibleSpacerBarButtonItem;
- (id)createShareBarButtonItem;
- (void)doShare:(id)a0;
- (void)positionBarButtonItemsForTraitCollection:(id)a0;
- (void)sizeBarButtonItemsForTraitCollection:(id)a0;

@end
