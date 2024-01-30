@class IXPromisedInMemoryDataSeed;

@interface IXPromisedInMemoryData : IXOwnedDataPromise <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) IXPromisedInMemoryDataSeed *seed;

- (id)initWithCoder:(id)a0;
- (void)resetWithCompletion:(id /* block */)a0;
- (id)initWithSeed:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithName:(id)a0 client:(unsigned long long)a1 data:(id)a2;
- (Class)seedClass;

@end
