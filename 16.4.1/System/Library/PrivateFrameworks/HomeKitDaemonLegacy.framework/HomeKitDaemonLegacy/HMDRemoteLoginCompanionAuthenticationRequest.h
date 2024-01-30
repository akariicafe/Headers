@class NSString, AKDevice, NSDictionary, ACAccount;

@interface HMDRemoteLoginCompanionAuthenticationRequest : HMDRemoteLoginAuthenticationRequest <HMRemoteLoginMessageProtocol>

@property (class, readonly, copy, nonatomic) NSString *messageName;
@property (class, readonly, copy, nonatomic) NSString *xpcMessageName;
@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) AKDevice *companionDevice;
@property (readonly, copy, nonatomic) NSString *messageName;
@property (readonly, copy, nonatomic) NSString *xpcMessageName;
@property (readonly, nonatomic) NSDictionary *messagePayload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)objWithMessage:(id)a0;
+ (id)objWithDict:(id)a0;

@end
