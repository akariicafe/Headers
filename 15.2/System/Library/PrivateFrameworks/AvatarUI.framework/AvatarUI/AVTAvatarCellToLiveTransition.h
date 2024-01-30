@protocol AVTAvatarTransitionModel;

@interface AVTAvatarCellToLiveTransition : AVTTransition

@property (readonly, nonatomic) id<AVTAvatarTransitionModel> avatarTransitionModel;

- (id)model;
- (void).cxx_destruct;
- (void)performTransition;
- (id)initWithModel:(id)a0 animated:(BOOL)a1 setupHandler:(id /* block */)a2 completionHandler:(id /* block */)a3 logger:(id)a4;

@end
