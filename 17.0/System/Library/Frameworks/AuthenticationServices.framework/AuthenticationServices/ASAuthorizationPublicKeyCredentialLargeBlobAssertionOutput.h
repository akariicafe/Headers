@class NSData;

@interface ASAuthorizationPublicKeyCredentialLargeBlobAssertionOutput : NSObject

@property (readonly, nonatomic) NSData *readData;
@property (readonly, nonatomic) BOOL didWrite;

+ (id)_outputWithData:(id)a0 didWrite:(BOOL)a1;

- (void).cxx_destruct;
- (id)_initWithData:(id)a0 didWrite:(BOOL)a1;

@end
