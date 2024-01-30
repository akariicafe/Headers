@class TPSInstalledAppInfo;

@interface TPSInstalledAppsValidation : TPSTargetingValidation

@property (retain, nonatomic) TPSInstalledAppInfo *appInfo;

- (id)description;
- (void).cxx_destruct;
- (void)validateWithCompletion:(id /* block */)a0;
- (id)initWithInstalledAppInfo:(id)a0;

@end
