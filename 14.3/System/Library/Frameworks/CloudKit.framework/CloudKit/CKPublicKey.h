@class NSData, NSDate;

@interface CKPublicKey : NSObject

@property (readonly, nonatomic) NSData *publicKey;
@property (readonly, nonatomic) long long version;
@property (readonly, nonatomic) NSDate *expiration;
@property (readonly, nonatomic) NSData *certData;

- (void).cxx_destruct;
- (BOOL)hasExpired;
- (id)initWithPublicKey:(id)a0 version:(long long)a1 expiration:(id)a2 certificateData:(id)a3;

@end
