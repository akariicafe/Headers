@class NSSet, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface SLGDomainWhitelist : NSObject <SLGDomainWhitelisting> {
    NSObject<OS_dispatch_queue> *_lockQueue;
    NSSet *_whitelist;
    BOOL _allowUnspecifiedDomains;
}

@property (nonatomic) BOOL allowUnspecifiedDomains;
@property (readonly, nonatomic) NSSet *whitelist;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addDomain:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (BOOL)isDomainWhitelisted:(id)a0;
- (void)_reloadSettings;
- (void)_beginObservingSettings;
- (void)_stopObservingSettings;
- (void)_lockQueue_loadSettings;
- (void)_lockQueue_loadWhitelist;
- (void)_lockQueue_loadUnspecifiedDomains;
- (void)removeDomain:(id)a0;

@end
