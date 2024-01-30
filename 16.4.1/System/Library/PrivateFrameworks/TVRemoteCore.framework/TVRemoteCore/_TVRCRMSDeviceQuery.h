@class NSString, TVRMSService, NSMutableDictionary;
@protocol TVRMSDiscoverySession, _TVRCRMSDeviceQueryDelegate;

@interface _TVRCRMSDeviceQuery : NSObject <TVRMSDiscoverySessionDelegate>

@property (retain, nonatomic) TVRMSService *service;
@property (retain, nonatomic) id<TVRMSDiscoverySession> legacyDiscoverySession;
@property (retain, nonatomic) NSMutableDictionary *wrapperToIdentifierMapping;
@property (weak, nonatomic) id<_TVRCRMSDeviceQueryDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stop;
- (void)start;
- (void).cxx_destruct;
- (BOOL)_shouldReportDevice:(id)a0;
- (void)discoverySessionDidUpdateAvailableServices:(id)a0;

@end
