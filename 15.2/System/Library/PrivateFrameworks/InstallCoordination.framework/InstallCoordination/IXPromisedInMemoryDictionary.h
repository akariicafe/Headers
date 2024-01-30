@class IXPromisedInMemoryDictionarySeed;

@interface IXPromisedInMemoryDictionary : IXOwnedDataPromise <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) IXPromisedInMemoryDictionarySeed *seed;

- (void)resetWithCompletion:(id /* block */)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSeed:(id)a0;
- (id)initWithCoder:(id)a0;
- (Class)seedClass;
- (id)initWithName:(id)a0 client:(unsigned long long)a1 dictionary:(id)a2;

@end
