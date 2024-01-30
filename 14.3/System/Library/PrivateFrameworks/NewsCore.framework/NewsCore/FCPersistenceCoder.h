@class NSData;

@interface FCPersistenceCoder : NSObject

@property (readonly, copy, nonatomic) NSData *key;

- (id)decodeData:(id)a0;
- (void).cxx_destruct;
- (id)_codeData:(id)a0;
- (id)encodeData:(id)a0;
- (id)initWithKey:(id)a0;

@end
