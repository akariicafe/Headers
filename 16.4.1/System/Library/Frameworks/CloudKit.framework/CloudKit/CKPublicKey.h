@class NSData, NSString, NSDate;

@interface CKPublicKey : NSObject

@property (readonly, copy, nonatomic) NSData *publicKey;
@property (readonly, nonatomic) long long version;
@property (readonly, copy, nonatomic) NSDate *expiration;
@property (readonly, copy, nonatomic) NSData *certData;
@property (readonly, copy, nonatomic) NSString *protectionSource;

- (BOOL)hasExpired;
- (void).cxx_destruct;
- (id)initWithPublicKey:(id)a0 version:(long long)a1 expiration:(id)a2 certificateData:(id)a3 protectionSource:(id)a4;

@end
