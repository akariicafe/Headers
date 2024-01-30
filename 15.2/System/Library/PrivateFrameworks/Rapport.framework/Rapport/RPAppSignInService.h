@class NSString, NSArray, SFService, NSObject;
@protocol OS_dispatch_queue;

@interface RPAppSignInService : NSObject {
    BOOL _activateCalled;
    SFService *_bleAdvertiser;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
}

@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *appBundleID;
@property (copy, nonatomic) NSArray *associatedDomains;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) unsigned int flags;

- (void)_invalidate;
- (id)description;
- (void).cxx_destruct;
- (void)activate;
- (id)init;
- (void)_activate;
- (void)invalidate;
- (void)_invalidated;

@end
