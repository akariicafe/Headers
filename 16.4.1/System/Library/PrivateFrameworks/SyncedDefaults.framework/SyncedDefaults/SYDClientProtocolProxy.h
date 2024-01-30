@protocol SYDClientProtocol;

@interface SYDClientProtocolProxy : NSObject <SYDClientProtocol>

@property (weak, nonatomic) id<SYDClientProtocol> target;

- (void)storeDidChangeWithStoreID:(id)a0 changeDictionary:(id)a1 reply:(id /* block */)a2;
- (id)initWithTarget:(id)a0;
- (void).cxx_destruct;

@end
