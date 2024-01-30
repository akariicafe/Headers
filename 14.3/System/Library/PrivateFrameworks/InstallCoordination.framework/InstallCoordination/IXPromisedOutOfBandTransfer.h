@class IXPromisedOutOfBandTransferSeed;

@interface IXPromisedOutOfBandTransfer : IXOpaqueDataPromise <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) IXPromisedOutOfBandTransferSeed *seed;
@property (nonatomic, getter=isComplete) BOOL complete;
@property (nonatomic) double percentComplete;

- (id)initWithCoder:(id)a0;
- (id)initWithSeed:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithName:(id)a0 client:(unsigned long long)a1 diskSpaceNeeded:(unsigned long long)a2;
- (Class)seedClass;

@end
