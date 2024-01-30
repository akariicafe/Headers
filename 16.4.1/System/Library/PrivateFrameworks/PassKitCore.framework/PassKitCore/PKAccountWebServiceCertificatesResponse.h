@class NSArray, NSString;

@interface PKAccountWebServiceCertificatesResponse : PKAccountWebServiceResponse

@property (readonly, copy, nonatomic) NSArray *encryptionCertificates;
@property (readonly, copy, nonatomic) NSString *encryptionVersion;
@property (nonatomic) BOOL devSigned;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
