@class MSOID, NSArray, NSString, NSData, MSAlgorithmIdentifier, NSNumber, NSMutableArray;
@protocol MSCMSMessage;

@interface MSCMSEnvelopedData : NSObject <MSCMSMessage>

@property (retain) NSNumber *version;
@property (retain) NSData *encryptedContent;
@property BOOL contentChanged;
@property (readonly) NSArray *recipients;
@property (retain) MSAlgorithmIdentifier *encryptionAlgorithm;
@property (retain) NSMutableArray *unprotectedAttributes;
@property (retain) NSMutableArray *originatorCertificates;
@property (readonly) MSOID *type;
@property (retain, nonatomic) NSData *dataContent;
@property (retain) id<MSCMSMessage> embeddedContent;
@property (retain) MSOID *contentType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)decodeMessageSecurityObject:(id)a0 options:(id)a1 error:(id *)a2;

- (void)addRecipient:(id)a0;
- (void).cxx_destruct;
- (id)encodeMessageSecurityObject:(id *)a0;
- (id)decryptContent:(id)a0 error:(id *)a1;
- (id)initWithDataContent:(id)a0 recipient:(id)a1;
- (id)initWithDataContent:(id)a0 recipient:(id)a1 encryptionAlgorithm:(id)a2;
- (id)initWithEmbeddedContent:(id)a0 recipient:(id)a1;
- (id)initWithEmbeddedContent:(id)a0 recipient:(id)a1 encryptionAlgorithm:(id)a2;
- (void)removeRecipientWithCertificate:(struct __SecCertificate { } *)a0 error:(id *)a1;
- (void)removeRecipientWithEmailAddress:(id)a0 error:(id *)a1;

@end
