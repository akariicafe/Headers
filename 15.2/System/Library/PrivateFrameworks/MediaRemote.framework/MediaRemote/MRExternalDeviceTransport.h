@class NSString, MRDeviceInfo, NSError;

@interface MRExternalDeviceTransport : NSObject

@property (readonly, nonatomic) MRDeviceInfo *deviceInfo;
@property (readonly, nonatomic) NSString *uid;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *hostname;
@property (readonly, nonatomic) long long port;
@property (readonly, nonatomic) BOOL requiresCustomPairing;
@property (nonatomic) BOOL shouldUseSystemAuthenticationPrompt;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) long long connectionType;
@property (readonly, nonatomic) BOOL isValid;

- (void)resetWithError:(id)a0;
- (BOOL)shouldUseSystemAuthenticationPrompt;
- (void)setShouldUseSystemAuthenticationPrompt:(BOOL)a0;
- (id)createConnectionWithUserInfo:(id)a0;
- (void).cxx_destruct;

@end
