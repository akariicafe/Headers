@class NSDictionary;

@interface UIWatchKitExtensionRequestAction : BSAction

@property (readonly, retain, nonatomic) NSDictionary *request;

- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)initWithRequest:(id)a0 withHandler:(id /* block */)a1;
- (id)initWithInfo:(id)a0 timeout:(double)a1 forResponseOnQueue:(id)a2 withHandler:(id /* block */)a3;
- (void)sendResponse:(id)a0;
- (long long)UIActionType;

@end
