@class NSError, MEEncodedOutgoingMessage;

@interface MEMessageEncodingResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) MEEncodedOutgoingMessage *encodedMessage;
@property (readonly, copy, nonatomic) NSError *signingError;
@property (readonly, copy, nonatomic) NSError *encryptionError;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithEncodedMessage:(id)a0 signingError:(id)a1 encryptionError:(id)a2;

@end
