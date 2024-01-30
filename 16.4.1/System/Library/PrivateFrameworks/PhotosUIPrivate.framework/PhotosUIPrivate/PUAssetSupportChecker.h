@interface PUAssetSupportChecker : NSObject

+ (void)_alertTitleAndMessageForAsset:(id)a0 type:(long long)a1 title:(id *)a2 message:(id *)a3;
+ (void)_presentAlertWithTitle:(id)a0 message:(id)a1 knowledgeBaseURL:(id)a2 alertControllerPresenter:(id /* block */)a3 completionHandler:(id /* block */)a4;
+ (void)checkIsSupportedAndPresentAlertForAsset:(id)a0 type:(long long)a1 alertControllerPresenter:(id /* block */)a2 completionHandler:(id /* block */)a3;
+ (void)checkIsSupportedAsset:(id)a0 type:(long long)a1 completionHandler:(id /* block */)a2;
+ (void)checkIsSupportedAsset:(id)a0 type:(long long)a1 completionHandlerWithReason:(id /* block */)a2;
+ (BOOL)isSupportedAsset:(id)a0 type:(long long)a1;
+ (void)presentAlertForAsset:(id)a0 type:(long long)a1 alertControllerPresenter:(id /* block */)a2 completionHandler:(id /* block */)a3;
+ (void)presentAlertWithTitle:(id)a0 message:(id)a1 uti:(id)a2 codecName:(id)a3 alertControllerPresenter:(id /* block */)a4 completionHandler:(id /* block */)a5;

@end
