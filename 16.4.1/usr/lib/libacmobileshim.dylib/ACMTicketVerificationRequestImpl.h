@class NSString, NSNumber;

@interface ACMTicketVerificationRequestImpl : ACMMessage <ACMTicketVerificationRequest>

@property (retain) NSString *userName;
@property (retain) NSString *realm;
@property (retain) NSString *token;
@property (retain) NSString *appIDKey;
@property (retain) NSNumber *appID;
@property (retain) NSNumber *serverResponseTimeout;
@property (retain) id userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
