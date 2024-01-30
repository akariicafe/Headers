@class DBIconView;

@interface _DBLaunchAppFromHomeZoomAnimation : DBHomeToAppAnimation

@property (readonly, nonatomic) DBIconView *iconView;

- (id)initWithSettings:(id)a0;
- (void).cxx_destruct;
- (void)startAnimationWithCompletion:(id /* block */)a0;

@end
