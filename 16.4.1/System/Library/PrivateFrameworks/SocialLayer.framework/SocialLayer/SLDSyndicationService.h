@class NSString;

@interface SLDSyndicationService : NSObject <SLDService, SLDSyndicationServiceProcotol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)remoteObjectProtocol;
+ (id)sharedService;

- (void)removeMessageGUIDFromSyndication:(id)a0 reply:(id /* block */)a1;

@end
