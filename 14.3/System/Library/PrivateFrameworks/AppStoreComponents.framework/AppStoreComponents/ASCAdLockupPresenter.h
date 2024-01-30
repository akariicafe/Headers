@class ASCLockup;
@protocol ASCAdLockupPresenterView;

@interface ASCAdLockupPresenter : NSObject

@property (readonly, nonatomic) id<ASCAdLockupPresenterView> view;
@property (copy, nonatomic) ASCLockup *lockup;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithView:(id)a0 lockupPresenter:(id)a1;
- (void)lockupPresenterDidChange:(id)a0;
- (BOOL)shouldDisplayDescriptionForLockup:(id)a0;

@end
