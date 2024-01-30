@class NSMapTable, NSSet, WFInterface, NSMutableSet, CWFInterface;
@protocol WFGasQueryControllerDelegate;

@interface WFGasQueryController : NSObject

@property (retain, nonatomic) NSMapTable *gasResponseCache;
@property (retain, nonatomic) NSMutableSet *resolvedNetworks;
@property (retain, nonatomic) WFInterface *interface;
@property (retain, nonatomic) CWFInterface *cInterface;
@property BOOL coreWiFiEnabled;
@property (weak, nonatomic) id<WFGasQueryControllerDelegate> delegate;
@property (readonly, nonatomic) NSSet *profiles;

- (void).cxx_destruct;
- (id)init;
- (id)initWithInterface:(id)a0 cInterface:(id)a1 enableCoreWiFi:(BOOL)a2;
- (void)removeAllProfiles;
- (void)resolveProfilesForNetworks:(id)a0;
- (id)profileForNetwork:(id)a0;
- (void)resolveProfileForNetwork:(id)a0 handler:(id /* block */)a1 force:(BOOL)a2;
- (void)removeProfileForNetwork:(id)a0;
- (void)_processANQPResults:(id)a0 scanRecords:(id)a1 error:(id)a2;
- (id)_defaultANQPParameterForNetworks:(id)a0;
- (id)_ANQPDictionaryFromScanResult:(id)a0;
- (id)_existingProfileForANQPResult:(id)a0;

@end
