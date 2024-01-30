@class NSData;

@interface TKTokenKeyExchangeParameters : NSObject

@property (readonly) long long requestedSize;
@property (readonly, copy) NSData *sharedInfo;

- (void).cxx_destruct;
- (id)initWithParameters:(id)a0;

@end
