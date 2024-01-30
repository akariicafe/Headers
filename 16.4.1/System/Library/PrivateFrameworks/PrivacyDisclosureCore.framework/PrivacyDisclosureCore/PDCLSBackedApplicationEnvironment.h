@class NSEnumerator, NSString, LSApplicationWorkspace;

@interface PDCLSBackedApplicationEnvironment : NSObject <PDCApplicationEnvironment> {
    LSApplicationWorkspace *_workspace;
}

@property (readonly, copy, nonatomic) NSEnumerator *allApplications;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)applicationIdentityForIdentityString:(id)a0;
- (id)applicationRecordForBundleIdentifier:(id)a0;
- (id)monitorAppEventsWithDelegate:(id)a0 onQueue:(id)a1;

@end
