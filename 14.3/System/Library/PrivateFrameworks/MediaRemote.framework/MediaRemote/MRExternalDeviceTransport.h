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

- (void).cxx_destruct;
- (BOOL)shouldUseSystemAuthenticationPrompt;
- (void)setShouldUseSystemAuthenticationPrompt:(BOOL)a0;
- (BOOL)getInputStream:(id *)a0 outputStream:(id *)a1 userInfo:(id)a2;
- (void)reset;

@end
