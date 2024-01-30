@class NSNumber, NSString;

@interface PKPeerPaymentWebServiceBadRequestResponse : PKPeerPaymentWebServiceResponse

@property (readonly, copy, nonatomic) NSNumber *errorCode;
@property (readonly, copy, nonatomic) NSString *serverDebugDescription;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
