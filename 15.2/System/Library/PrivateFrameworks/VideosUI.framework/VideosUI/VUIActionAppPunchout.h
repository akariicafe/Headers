@class NSURL, VUIAppContext;

@interface VUIActionAppPunchout : VUIAction

@property (readonly, nonatomic) NSURL *punchoutURL;
@property (readonly, nonatomic) BOOL isSensitiveURL;
@property (weak, nonatomic) VUIAppContext *appContext;

- (void).cxx_destruct;
- (void)performWithTargetResponder:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithContextData:(id)a0 appContext:(id)a1;
- (void)_openPunchoutURL:(id)a0;

@end
