@class NSArray, NSString;

@interface PKAccountWebServiceCertificatesResponse : PKAccountWebServiceResponse

@property (readonly, copy, nonatomic) NSArray *encryptionCertificates;
@property (readonly, copy, nonatomic) NSString *encryptionVersion;
@property (nonatomic) BOOL devSigned;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
