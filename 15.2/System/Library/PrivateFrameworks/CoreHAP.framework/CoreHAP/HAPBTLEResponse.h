@class HAPBTLERequest, NSData, NSMutableData, HAPBTLETransactionIdentifier;

@interface HAPBTLEResponse : HMFObject

@property (nonatomic, getter=isHeaderComplete) BOOL headerComplete;
@property (copy, nonatomic) NSData *body;
@property (retain, nonatomic, setter=_setInternalBody:) NSMutableData *_internalBody;
@property (readonly, nonatomic) HAPBTLERequest *request;
@property (readonly, nonatomic) HAPBTLETransactionIdentifier *identifier;
@property (readonly, nonatomic, getter=isEncrypted) BOOL encrypted;
@property (readonly, nonatomic, getter=isBodyComplete) BOOL bodyComplete;
@property (readonly, nonatomic, getter=isComplete) BOOL complete;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, nonatomic) unsigned long long bodyLength;
@property (readonly, nonatomic) unsigned char statusCode;

- (id)initWithRequest:(id)a0;
- (id)descriptionWithPointer:(BOOL)a0;
- (id)shortDescription;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)appendData:(id)a0 error:(id *)a1;
- (id)init;
- (id)debugDescription;
- (unsigned long long)_remainingBodyLength;
- (unsigned long long)_deserializeHeaderWithData:(id)a0 error:(id *)a1;
- (unsigned long long)_deserializeHeaderBodyLengthWithData:(id)a0 error:(id *)a1;

@end
