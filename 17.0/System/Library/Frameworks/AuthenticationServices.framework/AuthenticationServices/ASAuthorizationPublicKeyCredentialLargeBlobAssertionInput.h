@class NSData;

@interface ASAuthorizationPublicKeyCredentialLargeBlobAssertionInput : NSObject

@property (readonly, nonatomic) long long operation;
@property (retain, nonatomic) NSData *dataToWrite;

- (id)initWithOperation:(long long)a0;
- (void).cxx_destruct;

@end
