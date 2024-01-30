@class TUHandle, NSBundle, CNContact, NSString, CoreTelephonyClient, NSObject;
@protocol OS_dispatch_queue;

@interface PHAssistantCall : SAPhoneCall <AFServiceCommand>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly, nonatomic) CoreTelephonyClient *telephonyClient;
@property (readonly, nonatomic) NSBundle *voiceDialBundle;
@property (readonly, nonatomic) TUHandle *destinationHandle;
@property (readonly, nonatomic) BOOL hasComputedDestinationHandle;
@property (readonly, nonatomic) CNContact *backingContact;
@property (readonly, nonatomic) BOOL hasComputedBackingContact;
@property (readonly, nonatomic, getter=isCarPlayActive) BOOL carPlayActive;
@property (readonly, nonatomic) BOOL shouldApplyInternationalAssist;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isEmergencyNumberOrIsWhiteListed:(id)a0 forProvider:(id)a1;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)_validate;
- (id)ISOCountryCode;
- (id)destinationID;
- (void)performWithCompletion:(id /* block */)a0 serviceHelper:(id)a1;
- (id)_copyExceptionsForCountryCode:(id)a0;
- (void)_addFaceTimeAvailabilityListener;
- (void)_performAppPunchOutWithDialRequest:(id)a0 withServiceHelper:(id)a1 completion:(id /* block */)a2;
- (void)_removeFaceTimeAvailabilityListener;
- (id)_voiceDialBundle;
- (id)appPunchOutDialRequestWithEndpointIDSDestinationURI:(id)a0;

@end
