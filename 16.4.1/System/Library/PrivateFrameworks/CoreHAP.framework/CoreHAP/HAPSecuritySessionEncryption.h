@class NSData, NSMutableData;

@interface HAPSecuritySessionEncryption : NSObject

@property (retain, nonatomic) NSData *inputKey;
@property (retain, nonatomic) NSMutableData *inputNonce;
@property (retain, nonatomic) NSData *outputKey;
@property (retain, nonatomic) NSMutableData *outputNonce;

- (id)init;
- (void).cxx_destruct;
- (id)decrypt:(id)a0 additionalAuthenticatedData:(id)a1 error:(id *)a2;
- (id)decrypt:(const void *)a0 length:(unsigned long long)a1 additionalAuthData:(const void *)a2 additionalAuthDataLength:(unsigned long long)a3 authTagData:(const void *)a4 authTagDataLength:(unsigned long long)a5 error:(id *)a6;
- (id)encrypt:(id)a0 additionalAuthenticatedData:(id)a1;
- (id)initWithInputKey:(id)a0 outputKey:(id)a1;

@end
