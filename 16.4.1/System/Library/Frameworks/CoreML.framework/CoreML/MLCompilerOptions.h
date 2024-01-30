@class NSString, NSData, NSURL, NSNumber;

@interface MLCompilerOptions : NSObject

@property BOOL trainWithMLCompute;
@property BOOL dryRun;
@property (retain) NSString *platform;
@property (retain) NSString *platformVersion;
@property BOOL containerIsCloud;
@property BOOL allowsPixelBufferDirectBinding;
@property BOOL encryptModel;
@property (copy) NSNumber *keyInfoVersion;
@property (copy) NSString *keyID;
@property (copy) NSData *key;
@property BOOL usesCodeSigningIdentityForEncryption;
@property (copy) NSData *iv;
@property (copy) NSData *sinf;
@property (copy) NSData *mlsinf;
@property (copy) NSURL *specURL;
@property int mlProgramAddDuringCompilationMode;

+ (id)defaultOptions;

- (id)init;
- (void).cxx_destruct;

@end
