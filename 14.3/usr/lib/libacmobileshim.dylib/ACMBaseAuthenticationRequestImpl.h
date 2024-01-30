@class NSString, NSNumber;

@interface ACMBaseAuthenticationRequestImpl : ACMMessage <ACMBaseAuthenticationRequest>

@property (retain, nonatomic) NSString *realm;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSNumber *appID;
@property (retain, nonatomic) NSString *appIDKey;
@property (retain, nonatomic) NSNumber *serverResponseTimeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
