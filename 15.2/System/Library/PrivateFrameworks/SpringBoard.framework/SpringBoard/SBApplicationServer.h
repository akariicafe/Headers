@protocol SBApplicationServerMedusaShortcutDelegate, SBApplicationServerMultiwindowDelegate, SBApplicationServerShortcutDelegate, SBApplicationServerMiscDelegate, SBApplicationServerHarmonyDelegate;

@interface SBApplicationServer : FBSServiceFacility

@property (weak, nonatomic) id<SBApplicationServerMiscDelegate> miscDelegate;
@property (weak, nonatomic) id<SBApplicationServerHarmonyDelegate> harmonyDelegate;
@property (weak, nonatomic) id<SBApplicationServerShortcutDelegate> shortcutDelegate;
@property (weak, nonatomic) id<SBApplicationServerMultiwindowDelegate> multiwindowDelegate;
@property (weak, nonatomic) id<SBApplicationServerMedusaShortcutDelegate> medusaShortcutDelegate;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)noteDidReceiveMessage:(id)a0 withType:(long long)a1 fromClient:(id)a2;
- (void)dealloc;

@end
