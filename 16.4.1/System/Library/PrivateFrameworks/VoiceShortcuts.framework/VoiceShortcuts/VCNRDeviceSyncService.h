@class VCCompanionSyncService, NSString, NSURL;

@interface VCNRDeviceSyncService : NSObject <NSCopying, VCShortcutSyncService>

@property (readonly, weak, nonatomic) VCCompanionSyncService *service;
@property (readonly, nonatomic) long long protocolVersion;
@property (readonly, copy, nonatomic) NSString *syncServiceIdentifier;
@property (readonly, copy, nonatomic) NSURL *directoryURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestSync;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCompanionSyncService:(id)a0 device:(id)a1;
- (void)requestFullResync;

@end
