@class NSDate, FKFriendsManager, NSString, SOSPersistentTimerLocationManager, _MKLocationShifter, NSMutableArray, CLLocation, SOSContactsManager;

@interface SOSEngine : NSObject <SOSInternalServerProtocol, SOSPersistentTimerLocationManagerDelegate, SOSServerProtocol, NSXPCListenerDelegate> {
    NSDate *_timeToStopSendingMessages;
    NSDate *_timeLastMessageSent;
    SOSContactsManager *_contactsManager;
    NSString *_medicalIDName;
    long long _notifyContactsReason;
}

@property (retain, nonatomic) FKFriendsManager *friendsManager;
@property (retain, nonatomic) _MKLocationShifter *locationShifter;
@property (retain, nonatomic) NSMutableArray *clientConnections;
@property (readonly, nonatomic) CLLocation *lastLocationSent;
@property (readonly, nonatomic) SOSPersistentTimerLocationManager *sosPersistentTimerLocationManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)meContact;
+ (id)contactStore;
+ (id)locationShifter;
+ (id)fullNameForContact:(id)a0;
+ (void)shiftedLocationWithLocation:(id)a0 completion:(id /* block */)a1;
+ (BOOL)authorizedToUseContactStore;
+ (void)preloadContactStoreIfNecessary;
+ (void)_sendMessageToRecipients:(id)a0 withLocation:(id)a1 isFirstMessage:(BOOL)a2 medicalIDName:(id)a3 Reason:(long long)a4;
+ (id)_sosMessageForLocation:(id)a0 isFirstMessage:(BOOL)a1 withMMS:(BOOL)a2 callbackNumber:(id)a3 medicalIDName:(id)a4 Reason:(long long)a5;
+ (BOOL)_isBasebandDevice;
+ (void)_sendSMSMessage:(id)a0 MMSMessage:(id)a1 location:(id)a2 recipients:(id)a3 failureBlock:(id /* block */)a4;
+ (id)GPSCoordinatesURLForLocation:(id)a0;
+ (void)_sendCKMessage:(id)a0 failureBlock:(id /* block */)a1;
+ (id)firstNameForContact:(id)a0;
+ (id)_sosMessageForLocation:(id)a0 isFirstMessage:(BOOL)a1 withMMS:(BOOL)a2 myFullName:(id)a3 myFirstName:(id)a4 callbackNumber:(id)a5 Reason:(long long)a6;
+ (id)additionalTextForCallbackNumber:(id)a0 fullName:(id)a1 firstName:(id)a2;
+ (void)_sendMessage:(id)a0 location:(id)a1 recipients:(id)a2 useStandalone:(BOOL)a3 failureBlock:(id /* block */)a4;
+ (id)additionalTextForCallbackNumber:(id)a0;

- (id)contactsManager;
- (void)dismissSOSWithCompletion:(id /* block */)a0;
- (void)willStartSendingLocationUpdate;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)stopSendingLocationUpdate;
- (void)start;
- (long long)currentSOSInitiationState;
- (void).cxx_destruct;
- (id)init;
- (void)startSendingLocationUpdateWithCompletion:(id /* block */)a0;
- (BOOL)isSendingLocationUpdate;
- (void)didDismissSOSBeforeSOSCall:(long long)a0;
- (void)dealloc;
- (void)contactStoreDidChange;
- (void)mostRecentLocationSentWithCompletion:(id /* block */)a0;
- (void)startSendingLocationUpdateForReason:(long long)a0 WithCompletion:(id /* block */)a1;
- (void)isSendingLocationUpdate:(id /* block */)a0;
- (void)updateCurrentSOSInitiationState:(long long)a0;
- (void)updateCurrentSOSInteractiveState:(long long)a0;
- (id)initWithoutEntitlement;
- (void)SOSSendingLocationUpdateChanged:(id)a0;
- (BOOL)locationIsValidToSend:(id)a0;
- (BOOL)notificationEnabledAndContactsExist;
- (void)sosPersistentTimerLocationMangerTimerFired:(id)a0 location:(id)a1;
- (void)fetchMedicalIDName;

@end
