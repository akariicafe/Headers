@class NSData, NSString, NSDate;

@interface CKPublicKey : NSObject

@property (readonly, nonatomic) NSData *publicKey;
@property (readonly, nonatomic) long long version;
@property (readonly, nonatomic) NSDate *expiration;
@property (readonly, nonatomic) NSData *certData;
@property (readonly, nonatomic) NSString *protectionSource;

- (id)initWithPublicKey:(id)a0 version:(long long)a1 expiration:(id)a2 certificateData:(id)a3 protectionSource:(id)a4;
- (void).cxx_destruct;
- (BOOL)hasExpired;

@end
