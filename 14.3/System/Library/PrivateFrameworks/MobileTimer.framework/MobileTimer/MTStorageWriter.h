@class NSCoder, NSMutableArray;

@interface MTStorageWriter : NSCoder <MTSerializer>

@property (retain, nonatomic) NSMutableArray *stack;
@property (readonly, nonatomic) unsigned long long mtType;
@property (readonly, nonatomic) NSCoder *mtCoder;

- (void)encodeDouble:(double)a0 forKey:(id)a1;
- (void)encodeInteger:(long long)a0 forKey:(id)a1;
- (void)encodeFloat:(float)a0 forKey:(id)a1;
- (void)encodeInt32:(int)a0 forKey:(id)a1;
- (id)init;
- (void)encodeInt:(int)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)encodeBool:(BOOL)a0 forKey:(id)a1;
- (void)encodeInt64:(long long)a0 forKey:(id)a1;
- (void)encodeObject:(id)a0 forKey:(id)a1;
- (void)_encodeObject:(id)a0 forKey:(id)a1;
- (void)_encodeProtocolObject:(id)a0 forKey:(id)a1;
- (id)_dictionaryForProtocolObject:(id)a0;
- (id)encodedDictionary;
- (id)_serializingProtocol;

@end
