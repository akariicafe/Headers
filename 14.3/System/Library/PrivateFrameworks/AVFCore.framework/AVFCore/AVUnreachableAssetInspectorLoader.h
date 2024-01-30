@class NSDictionary;

@interface AVUnreachableAssetInspectorLoader : AVAssetInspectorLoader {
    int _figError;
    NSDictionary *_figErrorUserInfo;
    BOOL _statusOfValueForKeyReturnsLoaded;
}

- (long long)statusOfValueForKey:(id)a0 error:(id *)a1;
- (void)dealloc;
- (id)initForUnitTests;
- (Class)_classForTrackInspectors;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithFigError:(int)a0 userInfo:(id)a1;

@end
