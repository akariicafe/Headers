@class NSString, NSData;

@interface MRCryptoPairingIdentity : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSData *publicKey;
@property (readonly, nonatomic) NSData *privateKey;

- (id)initWithIdentifier:(id)a0 publicKey:(id)a1 privateKey:(id)a2;
- (id)init;
- (void).cxx_destruct;

@end
