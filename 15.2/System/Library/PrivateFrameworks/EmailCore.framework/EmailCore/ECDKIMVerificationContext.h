@class NSArray, ECRawMessageHeaders, NSData;

@interface ECDKIMVerificationContext : NSObject

@property (copy, nonatomic) NSArray *dkimSignatureHeaders;
@property (readonly, nonatomic) ECRawMessageHeaders *headers;
@property (readonly, copy, nonatomic) NSData *bodyData;
@property (nonatomic) BOOL requireFullBodySignature;

- (void).cxx_destruct;
- (id)initWithHeaders:(id)a0 bodyData:(id)a1 dkimSignatureHeaders:(id)a2;
- (void)removeDKIMSignatureHeaders:(id)a0;

@end
