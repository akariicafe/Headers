@class NSData;

@interface _LSValidationToken : NSObject <NSSecureCoding> {
    NSData *_payload;
    NSData *_nonce;
    NSData *_HMAC;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) id owner;

+ (id)HMACWithPayload:(id)a0 nonce:(id)a1;

- (id)initWithPayload:(id)a0;
- (void).cxx_destruct;
- (BOOL)isCorrectForPayload:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
