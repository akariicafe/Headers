@class NSData, NSString;

@interface ASPublicKeyCredentialClientData : NSObject

@property (retain, nonatomic) NSData *challenge;
@property (retain, nonatomic) NSString *origin;
@property (retain, nonatomic) NSString *topOrigin;
@property (nonatomic) long long crossOrigin;

- (void).cxx_destruct;
- (id)initWithChallenge:(id)a0 origin:(id)a1;
- (id)jsonForOperationType:(long long)a0;

@end
