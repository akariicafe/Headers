@class NSArray, NSData, NSDate;

@interface MSDecodeOptions : NSObject

@property BOOL verifySignatures;
@property BOOL verifySigners;
@property (retain) NSArray *signerPolicies;
@property (retain) NSDate *verifyTime;
@property struct __SecIdentity { } *identity;
@property (retain) NSData *key;
@property (retain) NSData *LAContext;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDecryptionIdentity:(struct __SecIdentity { } *)a0;
- (id)initWithDecryptionKey:(id)a0;

@end
