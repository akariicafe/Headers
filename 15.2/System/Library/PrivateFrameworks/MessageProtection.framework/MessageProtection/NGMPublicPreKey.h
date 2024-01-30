@class NSData, DHPublicKey;

@interface NGMPublicPreKey : NSObject

@property (readonly, nonatomic) DHPublicKey *dhKey;
@property (readonly, nonatomic) NSData *signature;
@property (readonly, nonatomic) double timestamp;

- (id)description;
- (BOOL)isValidlySignedBy:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initRemotePrekeyWithPublicPrekey:(id)a0 signedBy:(id)a1 error:(id *)a2;
- (id)initWithPublicKey:(id)a0 signature:(id)a1 timestamp:(double)a2;

@end
