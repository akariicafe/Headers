@class NSString;

@interface SBAppVisibilityPreferences : NSObject {
    NSString *_bundleID;
    NSString *_containerPath;
    BOOL _currentlyVisible;
}

@property (readonly, getter=isDefaultVisible) BOOL defaultVisible;
@property (readonly, getter=isCurrentlyVisible) BOOL currentlyVisible;

- (void).cxx_destruct;
- (id)initWithDefaultVisible:(BOOL)a0 bundleID:(id)a1 containerPath:(id)a2;
- (BOOL)update;
- (id)description;

@end
