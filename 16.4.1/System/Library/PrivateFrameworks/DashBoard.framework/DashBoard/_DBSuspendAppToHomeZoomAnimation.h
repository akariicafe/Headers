@class DBIconView;

@interface _DBSuspendAppToHomeZoomAnimation : DBAppToHomeAnimation

@property (retain, nonatomic) DBIconView *iconView;

- (id)initWithSettings:(id)a0;
- (void).cxx_destruct;
- (void)startAnimationWithCompletion:(id /* block */)a0;

@end
