@class NSString, NSArray;

@interface HMDNEHelperClient : NSObject <HMFLogging, HMDNEHelperClient> {
    NSArray *_cachedEntries;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)init;
- (void).cxx_destruct;
- (void)cacheClearUUIDs;
- (void)_addIdentifiers:(id)a0 signingId:(id)a1;
- (id)_signingIdentifierWithProcessId:(id)a0;
- (id)cacheCopyAppUUIDForSigningIdentifier:(id)a0 executablePath:(id)a1;
- (id)cacheCopySigningIdentifierForProcessIdentifier:(id)a0;

@end
