@class NSString, NSDictionary, NSError, NSNumber;

@interface ACMTicketVerificationResponseImpl : ACMAuthenticationResponseImpl <ACMTicketVerificationResponse>

@property (retain) NSDictionary *rawResponseData;
@property (retain) NSError *error;
@property (retain) id userInfo;
@property (readonly, retain) NSNumber *personDSID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
