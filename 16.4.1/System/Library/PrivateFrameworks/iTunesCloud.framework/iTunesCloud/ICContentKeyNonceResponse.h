@class NSData;

@interface ICContentKeyNonceResponse : NSObject

@property (readonly, nonatomic) long long status;
@property (readonly, copy, nonatomic) NSData *nonceData;

- (id)initWithResponseDictionary:(id)a0;
- (void).cxx_destruct;

@end
