@class NSData;

@interface ACCHWComponentAuthServiceParams : NSObject

@property (nonatomic) unsigned int moduleAuthService;
@property (nonatomic) unsigned int authFlags;
@property (retain, nonatomic) NSData *certificate;
@property (retain, nonatomic) NSData *signature;
@property (retain, nonatomic) NSData *deviceNonce;
@property (retain, nonatomic) NSData *challenge;

- (void).cxx_destruct;

@end
