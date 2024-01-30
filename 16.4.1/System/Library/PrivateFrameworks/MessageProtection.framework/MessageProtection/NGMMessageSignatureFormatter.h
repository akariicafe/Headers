@class NSData, NSString;

@interface NGMMessageSignatureFormatter : NSObject <SignatureFormatter>

@property (readonly, nonatomic) NSData *formattedSignedData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)signedData;
- (void).cxx_destruct;
- (id)initWithDHOutput:(id)a0 prekeyPub:(id)a1 ephemeralPub:(id)a2 recipientPub:(id)a3 ciphertext:(id)a4;

@end
