@class NSMutableArray;

@interface TXRDeferredMipmapInfo : NSObject

@property (readonly, nonatomic) NSMutableArray *elements;

- (void).cxx_destruct;
- (id)initWithArrayLength:(unsigned long long)a0 cubemap:(BOOL)a1;

@end
