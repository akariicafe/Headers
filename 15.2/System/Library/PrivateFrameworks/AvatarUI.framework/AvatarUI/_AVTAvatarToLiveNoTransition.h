@protocol AVTAvatarTransitionModel;

@interface _AVTAvatarToLiveNoTransition : AVTTransition

@property (readonly, nonatomic) id<AVTAvatarTransitionModel> avatarTransitionModel;

- (id)model;
- (void).cxx_destruct;
- (id)initWithModel:(id)a0 animated:(BOOL)a1 completionHandler:(id /* block */)a2 logger:(id)a3;
- (void)_startTransition;

@end
