@class FBSDisplayIdentity;

@interface _UIRemoteViewControllerSceneContext : NSObject <NSCopying, NSSecureCoding> {
    BOOL _enhancedWindowingEnabled;
    FBSDisplayIdentity *_displayIdentity;
    long long _screenReferenceDisplayModeStatus;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDisplayIdentity:(id)a0 screenReferenceDisplayModeStatus:(long long)a1 enhancedWindowEnabled:(BOOL)a2;

@end
