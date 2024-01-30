@class HMDService, HAPSupportedDiagnosticsSnapshot, NSString;

@interface HMDAccessoryDiagnosticsSettings : NSObject

@property (readonly) HMDService *diagnosticsService;
@property (retain) HAPSupportedDiagnosticsSnapshot *currentSnapshot;
@property (readonly) NSString *transport;

- (id)initWithService:(id)a0;
- (id)attributeDescriptions;
- (void).cxx_destruct;

@end
