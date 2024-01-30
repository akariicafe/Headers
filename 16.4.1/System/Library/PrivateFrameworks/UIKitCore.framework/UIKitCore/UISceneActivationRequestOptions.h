@class UIScene;

@interface UISceneActivationRequestOptions : NSObject <NSCopying>

@property (nonatomic) BOOL preserveLayout;
@property (nonatomic) long long _collectionJoinBehavior;
@property (nonatomic, setter=_setRequestFullscreen:) BOOL _requestFullscreen;
@property (retain, nonatomic) UIScene *requestingScene;
@property (nonatomic) long long collectionJoinBehavior;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_descriptionProperties;
- (id)description;
- (void).cxx_destruct;

@end
