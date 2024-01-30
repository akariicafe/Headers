@class NSData, NSDictionary;

@interface IDSMPDecryptionResult : NSObject

@property (retain, nonatomic) NSData *decryptedData;
@property (retain, nonatomic) NSDictionary *encryptedAttributes;
@property (copy, nonatomic) id /* block */ commitBlock;

- (id)initWithData:(id)a0 encryptedAttributes:(id)a1 withCommitState:(id /* block */)a2;
- (void).cxx_destruct;

@end
