@class NSString, NSNumber, NSData;

@interface MLCompilerOptions : NSObject

@property BOOL dryRun;
@property (retain) NSString *platform;
@property (retain) NSString *platformVersion;
@property BOOL containerIsCloud;
@property BOOL encryptModel;
@property (copy) NSNumber *keyInfoVersion;
@property (copy) NSString *keyID;
@property (copy) NSData *key;
@property BOOL usesCodeSigningIdentityForEncryption;
@property (copy) NSData *iv;
@property (copy) NSData *sinf;
@property (copy) NSData *mlsinf;

+ (id)defaultOptions;

- (id)init;
- (void).cxx_destruct;

@end
