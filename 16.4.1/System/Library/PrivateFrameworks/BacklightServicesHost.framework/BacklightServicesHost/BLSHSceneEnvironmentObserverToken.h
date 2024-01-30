@protocol NSCopying, NSObject, BLSHSceneEnvironmentObserving;

@interface BLSHSceneEnvironmentObserverToken : NSObject <NSCopying> {
    id<BLSHSceneEnvironmentObserving> _observer;
    id<NSObject, NSCopying> _sceneIdentityToken;
}

+ (id)tokenWithObserver:(id)a0 sceneIdentityToken:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithObserver:(id)a0 sceneIdentityToken:(id)a1;

@end
