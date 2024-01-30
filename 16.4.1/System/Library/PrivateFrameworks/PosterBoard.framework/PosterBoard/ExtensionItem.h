@class PRSceneViewController, PRSPosterPath, _EXExtensionIdentity;
@protocol BSInvalidatable;

@interface ExtensionItem : NSObject {
    _EXExtensionIdentity *_extension;
    PRSceneViewController *_viewController;
    PRSPosterPath<BSInvalidatable> *_tmpPoster;
    long long _activationStyle;
}

+ (id)itemWithExtension:(id)a0 activationStyle:(long long)a1;

- (void)deactivate;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)activate;
- (void)invalidate;
- (void).cxx_destruct;
- (id)name;
- (BOOL)wasEverActivated;

@end
