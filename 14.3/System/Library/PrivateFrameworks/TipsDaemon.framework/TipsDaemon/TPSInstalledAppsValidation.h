@class TPSInstalledAppInfo;

@interface TPSInstalledAppsValidation : TPSTargetingValidation

@property (retain, nonatomic) TPSInstalledAppInfo *appInfo;

- (void).cxx_destruct;
- (id)description;
- (void)validateWithCompletion:(id /* block */)a0;
- (id)initWithInstalledAppInfo:(id)a0;

@end
