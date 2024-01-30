@class NSURL, BSProcessHandle;

@interface UISOpenURLAction : BSAction

@property (readonly, copy, nonatomic) NSURL *url;
@property (readonly, nonatomic) BSProcessHandle *workspaceOriginatingProcess;

- (BOOL)isKindOfClass:(Class)a0;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)initWithInfo:(id)a0 timeout:(double)a1 forResponseOnQueue:(id)a2 withHandler:(id /* block */)a3;
- (id)initWithURL:(id)a0;
- (long long)UIActionType;
- (id)initWithURL:(id)a0 workspaceOriginatingProcess:(id)a1;

@end
