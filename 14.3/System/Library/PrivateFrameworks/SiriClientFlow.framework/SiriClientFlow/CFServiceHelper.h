@class NSString;
@protocol AFServiceHelper;

@interface CFServiceHelper : NSObject <AFServiceHelper>

@property (retain) id<AFServiceHelper> serviceHelper;
@property BOOL isClientLiteHelper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isDeviceInStarkMode;
- (BOOL)openSensitiveURL:(id)a0;
- (void)dismissAssistant;
- (void)prepareForAudioHandoffWithCompletion:(id /* block */)a0;
- (void)prepareForAudioHandoffFailedWithCompletion:(id /* block */)a0;
- (void)handleCommand:(id)a0 completion:(id /* block */)a1;
- (id)assistantLocalizedStringForKey:(id)a0 table:(id)a1 bundle:(id)a2;
- (BOOL)isDeviceLockedWithPasscode;
- (BOOL)isDeviceInCarDND;
- (BOOL)isTimeoutSuspended;
- (id)peerInfoForCurrentCommand;
- (void)handleCommand:(id)a0 isOneWay:(BOOL)a1 completion:(id /* block */)a2;
- (void)handleRemoteCommand:(id)a0 isOneWay:(BOOL)a1 completion:(id /* block */)a2;
- (id)initWithServiceHelper:(id)a0;
- (id)initClientLiteHelper;

@end
