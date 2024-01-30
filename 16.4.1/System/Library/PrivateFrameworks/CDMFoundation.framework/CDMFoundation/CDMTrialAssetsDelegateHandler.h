@class NSArray, NSMutableDictionary;
@protocol CDMTrialAssetsDelegate;

@interface CDMTrialAssetsDelegateHandler : NSObject {
    id<CDMTrialAssetsDelegate> _delegate;
    NSArray *_namespaceNames;
    NSMutableDictionary *_assetsAvailabilities;
}

- (void).cxx_destruct;
- (void)notifyDelegate;
- (BOOL)assetsAvailableForNamespace:(id)a0 forLocale:(id)a1;
- (BOOL)assetsUnavailableForNamespace:(id)a0;
- (id)initWithAssetsDelegate:(id)a0 forNamespaces:(id)a1;

@end
