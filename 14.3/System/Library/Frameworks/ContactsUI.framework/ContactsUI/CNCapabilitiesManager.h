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

- (void).cxx_destruct;
- (void)dealloc;
- (void)idStatusUpdatedForDestinations:(id)a0 service:(id)a1;
- (BOOL)isSensitiveUIAllowed;
- (BOOL)hasCellularTelephonyCapability;
- (BOOL)hasCellularTelephonyHardwareCapability;
- (BOOL)hasCellularDataCapability;
- (BOOL)hasSMSCapability;
- (BOOL)hasForceTouchCapability;
- (BOOL)isMMSConfigured;
- (BOOL)hasSiriCapability;
- (BOOL)hasCameraCapability;
- (BOOL)isEmailConfigured;
- (BOOL)isMadridConfigured;
- (BOOL)isConferencingAvailable;
- (BOOL)isConferencingEverGonnaBeAvailable;
- (BOOL)hasAdditionalTextTones;
- (BOOL)hasPreviouslyConferencedWithID:(id)a0;
- (id)conferenceURLForPhoneNumber:(id)a0;
- (BOOL)isPhoneAppAvailable;
- (id)conferenceURLForDestinationID:(id)a0;
- (void)addIDSServiceAvailabilityListener:(id)a0 selector:(SEL)a1;
- (void)removeIDSServiceAvailabilityListener:(id)a0;
- (BOOL)isMessagesAppAvailable;
- (BOOL)_isAppAvailable:(id)a0;
- (void)_startListeningToIDSServiceAvailabilityIfNecessary;
- (BOOL)isWeiboServiceAvailable;
- (void)_startListeningToIDSIDQueryControllerIfNecessary;
- (BOOL)isMailAppAvailable;
- (BOOL)isFaceTimeAppAvailable;
- (BOOL)areFavoritesAvailable;
- (BOOL)isFaceTimeAudioAvailable;
- (BOOL)hasTelephonyCapability;
- (BOOL)hasVibratorCapability;

@end
