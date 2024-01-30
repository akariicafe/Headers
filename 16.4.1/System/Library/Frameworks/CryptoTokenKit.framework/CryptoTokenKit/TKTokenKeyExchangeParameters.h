@class NSData;

@interface TKTokenKeyExchangeParameters : NSObject

@property (readonly) long long requestedSize;
@property (readonly, copy) NSData *sharedInfo;

- (id)initWithParameters:(id)a0;
- (void).cxx_destruct;

@end
