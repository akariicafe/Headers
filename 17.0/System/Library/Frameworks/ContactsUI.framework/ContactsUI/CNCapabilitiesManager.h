@class NSString, NSMutableDictionary;

@interface CNCapabilitiesManager : NSObject <IDSIDQueryControllerDelegate> {
    BOOL _isListeningToIDSServiceAvailability;
    BOOL _isListeningToIDSQueryController;
    NSMutableDictionary *_destinationStatus;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_setDefaultCapabilitiesManager:(id)a0;
+ (id)defaultCapabilitiesManager;

- (void)_startListeningToIDSServiceAvailabilityIfNecessary;
- (void)idStatusUpdatedForDestinations:(id)a0 service:(id)a1;
- (void)dealloc;
- (BOOL)areFavoritesAvailable;
- (void)removeIDSServiceAvailabilityListener:(id)a0;
- (BOOL)hasAdditionalTextTones;
- (BOOL)isFaceTimeAppAvailable;
- (BOOL)isSensitiveUIAllowed;
- (BOOL)hasPreviouslyConferencedWithID:(id)a0;
- (BOOL)isMessagesAppAvailable;
- (BOOL)isPhoneAppAvailable;
- (BOOL)hasSMSCapability;
- (BOOL)hasVibratorCapability;
- (BOOL)isEmailConfigured;
- (BOOL)hasCellularDataCapability;
- (id)conferenceURLForPhoneNumber:(id)a0;
- (BOOL)isConferencingEverGonnaBeAvailable;
- (BOOL)isMailAppAvailable;
- (BOOL)hasSiriCapability;
- (BOOL)hasCameraCapability;
- (void).cxx_destruct;
- (id)conferenceURLForDestinationID:(id)a0;
- (void)addIDSServiceAvailabilityListener:(id)a0 selector:(SEL)a1;
- (void)_startListeningToIDSIDQueryControllerIfNecessary;
- (BOOL)_isAppAvailable:(id)a0;
- (BOOL)hasForceTouchCapability;
- (BOOL)hasCellularTelephonyHardwareCapability;
- (BOOL)hasCellularTelephonyCapability;
- (BOOL)isConferencingAvailable;
- (BOOL)isMMSConfigured;
- (BOOL)hasTelephonyCapability;
- (BOOL)isMadridConfigured;
- (BOOL)isFaceTimeAudioAvailable;
- (BOOL)isWeiboServiceAvailable;

@end
