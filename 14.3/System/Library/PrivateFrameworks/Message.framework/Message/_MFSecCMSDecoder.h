@class NSArray, NSString;

@interface _MFSecCMSDecoder : NSObject <MFCollectingDataConsumer> {
    struct SecCmsMessageStr { } *_message;
    struct SecCmsDigestContextStr { } *_digest;
    struct SecCmsSignedDataStr { } *_signedData;
    struct SecCmsEnvelopedDataStr { } *_envelopedData;
    BOOL _isEncrypted;
}

@property (readonly, nonatomic) int lastSecCMSError;
@property (readonly, nonatomic) NSArray *signers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)data;
- (void)dealloc;
- (id)signedData;
- (long long)appendData:(id)a0;
- (id)initWithPartData:(id)a0 error:(id *)a1;
- (BOOL)containsSignedContent;
- (id)verifyAgainstSenders:(id)a0 signingError:(id *)a1;
- (BOOL)isContentEncrypted;
- (BOOL)isContentSigned;
- (void)done;

@end
