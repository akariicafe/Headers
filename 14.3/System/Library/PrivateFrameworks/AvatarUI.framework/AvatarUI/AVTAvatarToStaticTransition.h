@protocol AVTAvatarTransitionModel;

@interface AVTAvatarToStaticTransition : AVTTransition

@property (readonly, nonatomic) id<AVTAvatarTransitionModel> avatarTransitionModel;

+ (void)clearStaticStateForAvatar:(id)a0;

- (id)model;
- (void).cxx_destruct;
- (id)initWithModel:(id)a0 animated:(BOOL)a1 completionHandler:(id /* block */)a2 logger:(id)a3;
- (void)performTransition;

@end
