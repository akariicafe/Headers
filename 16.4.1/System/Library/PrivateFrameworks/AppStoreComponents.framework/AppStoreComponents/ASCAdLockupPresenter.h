@class ASCLockup;
@protocol ASCAdLockupPresenterView;

@interface ASCAdLockupPresenter : NSObject

@property (readonly, nonatomic) id<ASCAdLockupPresenterView> view;
@property (copy, nonatomic) ASCLockup *lockup;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setDeveloperName:(id)a0;
- (id)initWithView:(id)a0 lockupPresenter:(id)a1;
- (void)lockupPresenterDidChange:(id)a0;
- (void)setAdTransparencyButtonHidden:(BOOL)a0;
- (void)setEditorsChoice:(BOOL)a0;
- (void)setProductDescription:(id)a0;
- (void)setProductRating:(float)a0;
- (void)setProductRatingBadge:(id)a0;
- (BOOL)shouldDisplayDescriptionForLockup:(id)a0;

@end
