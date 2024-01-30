@class UIScene, NSString, UISceneConfiguration, NSUserActivity, NSDictionary, UICanvas;

@interface UISceneSession : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    UISceneConfiguration *_configuration;
    NSUserActivity *_stateRestorationActivity;
    NSDictionary *_userInfo;
    struct { unsigned char _userInfoIsCurrent : 1; unsigned char _stateRestorationActivityIsDirty : 1; unsigned char _stateRestorationActivityIsCurrent : 1; unsigned char _trackingSessionRequest : 1; unsigned char _configurationIsDirty : 1; unsigned char _userInfoIsDirty : 1; unsigned char _isInternal : 1; } _sessionFlags;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) UICanvas *representedCanvas;
@property (readonly, nonatomic) long long systemType;
@property (readonly, nonatomic) Class canvasSubclass;
@property (readonly, nonatomic, getter=_isInternal) BOOL _internal;
@property (readonly, nonatomic) BOOL _configurationNeedsReevalulation;
@property (nonatomic, setter=_setTrackingRefreshRequest:) BOOL _trackingRefreshRequest;
@property (nonatomic, setter=_setConfigurationIsDirty:) BOOL _configurationIsDirty;
@property (nonatomic, setter=_setUserInfoIsDirty:) BOOL _userInfoIsDirty;
@property (nonatomic, setter=_setStateRestorationActivityIsDirty:) BOOL _stateRestorationActivityIsDirty;
@property (readonly, weak, nonatomic) UIScene *scene;
@property (readonly, nonatomic) NSString *role;
@property (readonly, copy, nonatomic) UISceneConfiguration *configuration;
@property (readonly, nonatomic) NSString *persistentIdentifier;
@property (retain, nonatomic) NSUserActivity *stateRestorationActivity;
@property (copy, nonatomic) NSDictionary *userInfo;

+ (id)canvasRepresentationForSystemType:(long long)a0;
+ (id)defaultCanvasRepresentation;

- (void)_updateConfiguration:(id)a0;
- (void)_setScene:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (Class)delegateClass;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)_initWithPersistentIdentifier:(id)a0 sessionRole:(id)a1 configurationName:(id)a2;
- (void)_resetStateRestorationToActivity:(id)a0;
- (void)_loadUserInfo;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)_loadStateRestorationActivityIfNeeded;
- (id)_init;
- (id)initWithCoder:(id)a0;
- (void)_clearAllDirtyFlags;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_copyWithoutUserInfo;
- (unsigned long long)hash;

@end
