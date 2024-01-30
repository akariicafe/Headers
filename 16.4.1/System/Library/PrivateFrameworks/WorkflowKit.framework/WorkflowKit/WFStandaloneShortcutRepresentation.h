@class NSString;

@interface WFStandaloneShortcutRepresentation : NSObject

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *associatedAppBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *launchIdForCurrentPlatform;
@property (readonly, copy, nonatomic) NSString *activityBundleIdentifier;

- (id)initWithBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)initWithINShortcut:(id)a0;
- (id)initWithINShortcut:(id)a0 title:(id)a1;
- (id)initWithTitle:(id)a0 associatedAppBundleIdentifier:(id)a1 launchIdForCurrentPlatform:(id)a2 activityBundleIdentifier:(id)a3;

@end
