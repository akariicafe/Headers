@class AMSUICommonCollectionViewHandler;
@protocol AMSUICommonCollectionViewDelegate, UICollectionViewDelegate;

@interface AMSUICommonCollectionView : UICollectionView

@property (readonly, nonatomic) AMSUICommonCollectionViewHandler *handler;
@property (weak, nonatomic) id<AMSUICommonCollectionViewDelegate> commonDelegate;
@property (weak, nonatomic) id<UICollectionViewDelegate> delegate;

- (void).cxx_destruct;
- (id)init;

@end
