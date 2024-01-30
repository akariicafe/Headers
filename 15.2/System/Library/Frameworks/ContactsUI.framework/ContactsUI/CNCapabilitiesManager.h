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

+ (id)defaultCapabilitiesManager;
+ (void)_setDefaultCapabilitiesManager:(id)a0;

- (BOOL)hasForceTouchCapability;
- (BOOL)isEmailConfigured;
- (BOOL)isFaceTimeAudioAvailable;
- (BOOL)_isAppAvailable:(id)a0;
- (BOOL)isSensitiveUIAllowed;
- (BOOL)hasCellularTelephonyHardwareCapability;
- (BOOL)areFavoritesAvailable;
- (BOOL)isPhoneAppAvailable;
- (BOOL)isMadridConfigured;
- (BOOL)hasCellularTelephonyCapability;
- (BOOL)hasVibratorCapability;
- (BOOL)isConferencingEverGonnaBeAvailable;
- (id)conferenceURLForPhoneNumber:(id)a0;
- (void)removeIDSServiceAvailabilityListener:(id)a0;
- (BOOL)hasPreviouslyConferencedWithID:(id)a0;
- (BOOL)hasAdditionalTextTones;
- (BOOL)isMailAppAvailable;
- (void)addIDSServiceAvailabilityListener:(id)a0 selector:(SEL)a1;
- (void).cxx_destruct;
- (BOOL)isWeiboServiceAvailable;
- (BOOL)hasCellularDataCapability;
- (BOOL)isFaceTimeAppAvailable;
- (BOOL)hasSiriCapability;
- (void)_startListeningToIDSServiceAvailabilityIfNecessary;
- (BOOL)isMessagesAppAvailable;
- (void)dealloc;
- (void)idStatusUpdatedForDestinations:(id)a0 service:(id)a1;
- (BOOL)isConferencingAvailable;
- (BOOL)hasTelephonyCapability;
- (BOOL)hasSMSCapability;
- (id)conferenceURLForDestinationID:(id)a0;
- (BOOL)isMMSConfigured;
- (void)_startListeningToIDSIDQueryControllerIfNecessary;
- (BOOL)hasCameraCapability;

@end
