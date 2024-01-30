@class NSNumber, NSString;

@interface HMDSiriEndpointHAPSettings : HMFObject

@property (retain) NSNumber *siriEnable;
@property (retain) NSNumber *siriListening;
@property (retain) NSNumber *siriTouchToUse;
@property (retain) NSNumber *siriLightOnUse;
@property (retain) NSString *siriEndpointVersion;
@property (retain) NSString *siriEngineVersion;
@property (retain) NSNumber *activeIdentifier;
@property (retain) NSNumber *manuallyDisabled;
@property (retain) NSNumber *multifunctionButton;
@property BOOL assistantsUpdated;

- (void).cxx_destruct;

@end
