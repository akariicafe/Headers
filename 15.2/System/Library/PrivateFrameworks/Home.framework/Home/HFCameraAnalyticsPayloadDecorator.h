@class NSString, NSMutableDictionary;

@interface HFCameraAnalyticsPayloadDecorator : NSObject <HFHomeManagerObserver>

@property (retain, nonatomic) NSMutableDictionary *additionalPayload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedDecorator;

- (void).cxx_destruct;
- (id)init;
- (void)homeKitDispatcher:(id)a0 manager:(id)a1 didChangeHome:(id)a2;
- (void)homeManagerDidFinishInitialDatabaseLoad:(id)a0;
- (void)_initialiseAdditionalPayload;
- (void)_updateHomeInformation:(id)a0;
- (void)_initialiseAdditionalPayloadForNewHome;
- (id)decoratePayload:(id)a0;

@end
