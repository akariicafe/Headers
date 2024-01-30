@interface PreviewsServicesUI.UVPreviewSceneAction : BSAction

+ (id)new;

- (id)initWithXPCDictionary:(id)a0;
- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(long long)a2;
- (id)keyDescriptionForSetting:(long long)a0;
- (id)initWithInfo:(id)a0 responder:(id)a1;
- (id)initWithInfo:(id)a0 timeout:(double)a1 forResponseOnQueue:(id)a2 withHandler:(id /* block */)a3;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
