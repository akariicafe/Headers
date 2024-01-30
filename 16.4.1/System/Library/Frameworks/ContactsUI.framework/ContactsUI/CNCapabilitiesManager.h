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

- (id)conferenceURLForPhoneNumber:(id)a0;
- (BOOL)isFaceTimeAudioAvailable;
- (void)_startListeningToIDSIDQueryControllerIfNecessary;
- (void)removeIDSServiceAvailabilityListener:(id)a0;
- (BOOL)hasTelephonyCapability;
- (BOOL)isMMSConfigured;
- (BOOL)isWeiboServiceAvailable;
- (BOOL)isMailAppAvailable;
- (BOOL)hasCellularDataCapability;
- (BOOL)hasSMSCapability;
- (void)idStatusUpdatedForDestinations:(id)a0 service:(id)a1;
- (id)conferenceURLForDestinationID:(id)a0;
- (BOOL)isConferencingAvailable;
- (void)dealloc;
- (BOOL)areFavoritesAvailable;
- (void)addIDSServiceAvailabilityListener:(id)a0 selector:(SEL)a1;
- (BOOL)isConferencingEverGonnaBeAvailable;
- (void)_startListeningToIDSServiceAvailabilityIfNecessary;
- (BOOL)isFaceTimeAppAvailable;
- (BOOL)isMadridConfigured;
- (BOOL)hasCameraCapability;
- (BOOL)isSensitiveUIAllowed;
- (BOOL)hasPreviouslyConferencedWithID:(id)a0;
- (BOOL)isMessagesAppAvailable;
- (BOOL)hasCellularTelephonyCapability;
- (BOOL)hasForceTouchCapability;
- (BOOL)hasVibratorCapability;
- (BOOL)isPhoneAppAvailable;
- (BOOL)hasAdditionalTextTones;
- (BOOL)isEmailConfigured;
- (BOOL)_isAppAvailable:(id)a0;
- (BOOL)hasCellularTelephonyHardwareCapability;
- (void).cxx_destruct;
- (BOOL)hasSiriCapability;

@end
