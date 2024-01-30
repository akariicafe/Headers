@class NSObject;
@protocol OS_dispatch_queue, TUCoreTelephonyClient;

@interface TUSenderIdentityClient : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) id<TUCoreTelephonyClient> client;

- (id)init;
- (void).cxx_destruct;
- (BOOL)inEmergencyMode;
- (BOOL)isWhitelistedEmergencyNumberForDigits:(id)a0 senderIdentityUUID:(id)a1 error:(id *)a2;
- (BOOL)isEmergencyNumberForDigits:(id)a0 senderIdentityUUID:(id)a1;
- (BOOL)isEmergencyNumberForDigits:(id)a0 senderIdentityUUID:(id)a1 error:(id *)a2;
- (BOOL)isRTTAvailableForSenderIdentityUUID:(id)a0;
- (BOOL)isRTTSupportedForSenderIdentityUUID:(id)a0;
- (BOOL)isTTYAvailableForSenderIdentityUUID:(id)a0;
- (BOOL)isTTYEnabledForSenderIdentityUUID:(id)a0;
- (BOOL)isTTYHardwareAvailableForSenderIdentityUUID:(id)a0;
- (BOOL)isTTYHardwareEnabledForSenderIdentityUUID:(id)a0;
- (BOOL)isTTYHardwareSupportedForSenderIdentityUUID:(id)a0;
- (BOOL)isTTYSoftwareAvailableForSenderIdentityUUID:(id)a0;
- (BOOL)isTTYSoftwareEnabledForSenderIdentityUUID:(id)a0;
- (BOOL)isTTYSoftwareSupportedForSenderIdentityUUID:(id)a0;
- (BOOL)isTTYSupportedForSenderIdentityUUID:(id)a0;
- (BOOL)isWhitelistedEmergencyNumberForDigits:(id)a0 senderIdentityUUID:(id)a1;
- (BOOL)shouldShowEmergencyCallbackModeAlertForSenderIdentityUUID:(id)a0;
- (BOOL)shouldShowEmergencyCallbackModeAlertForSenderIdentityUUID:(id)a0 error:(id *)a1;
- (id)testEmergencyHandleForAccountUUID:(id)a0 error:(id *)a1;

@end
