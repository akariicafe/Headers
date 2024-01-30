@class NSNumber, NSString;

@interface PKPeerPaymentWebServiceBadRequestResponse : PKPeerPaymentWebServiceResponse

@property (readonly, copy, nonatomic) NSNumber *errorCode;
@property (readonly, copy, nonatomic) NSString *serverDebugDescription;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
