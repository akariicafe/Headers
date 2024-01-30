@class NSString, SBApplicationController;

@interface SBApplicationService : NSObject <SBApplicationServerMiscDelegate> {
    SBApplicationController *_applicationController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_initWithApplicationController:(id)a0;
- (void)applicationServer:(id)a0 client:(id)a1 deleteSnapshotsForApplicationIdentifier:(id)a2;

@end
