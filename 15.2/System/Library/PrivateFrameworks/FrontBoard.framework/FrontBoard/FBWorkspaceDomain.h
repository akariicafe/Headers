@class NSString, NSArray, BSServiceConnectionListener;
@protocol BSInvalidatable;

@interface FBWorkspaceDomain : NSObject <BSServiceConnectionListenerDelegate> {
    BOOL _bootstrapConfigured;
    BOOL _usesDefaultShellEndpoint;
    BOOL _injectorEnabled;
    BOOL _assertsVisibility;
    id<BSInvalidatable> _registration;
    BSServiceConnectionListener *_listener;
    id<BSInvalidatable> _activation;
    NSArray *_fgLaunchAttributes;
    NSArray *_fgSupportLaunchAttributes;
    NSArray *_bgLaunchAttributes;
    NSArray *_utLaunchAttributes;
    NSArray *_bgUtilityAttributes;
    NSArray *_bgActiveAttributes;
    NSArray *_fgSuspendedAttributes;
    NSArray *_fgUtilityAttributes;
    NSArray *_fgNonFocalAttributes;
    NSArray *_fgFocalAttributes;
    NSArray *_fgSupportSuspendedAttributes;
    NSArray *_fgSupportUtilityAttributes;
    NSArray *_fgSupportNonFocalAttributes;
    NSArray *_fgSupportFocalAttributes;
    NSArray *_injectorAttributes;
    NSString *_identifier;
    NSString *_machName;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)endpoint;
+ (id)debugDescription;

- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
