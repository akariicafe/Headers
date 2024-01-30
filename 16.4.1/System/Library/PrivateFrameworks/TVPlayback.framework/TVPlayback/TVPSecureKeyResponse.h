@class NSData, TVPSecureKeyRequest, NSDate;

@interface TVPSecureKeyResponse : NSObject

@property (retain, nonatomic) NSData *keyData;
@property (retain, nonatomic) NSDate *renewalDate;
@property (retain, nonatomic) TVPSecureKeyRequest *request;

- (void).cxx_destruct;

@end
