@class NSString;

@interface FPDDeadEndExtensionSession : NSObject <FPDExtensionSessionProtocol>

@property (nonatomic) BOOL hasFileProviderPresenceTCCAccess;
@property (readonly, nonatomic) BOOL hasFileProviderAttributionMDMAccess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updatePresenceTCCWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (void)dumpStateTo:(id)a0;
- (void)asyncUnregisterLifetimeExtensionForObject:(id)a0;
- (id)newFileProviderProxyWithTimeout:(double)a0 pid:(int)a1;
- (void)terminateWithReason:(id)a0;
- (id)existingFileProviderProxyWithTimeout:(double)a0 onlyAlreadyLifetimeExtended:(BOOL)a1 pid:(int)a2;
- (void)cancel;
- (void)registerLifetimeExtensionForObject:(id)a0;
- (void)start;
- (void)invalidate;
- (void)unregisterLifetimeExtensionForObject:(id)a0;

@end
