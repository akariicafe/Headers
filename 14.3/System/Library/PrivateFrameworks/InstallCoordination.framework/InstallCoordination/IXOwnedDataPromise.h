@class NSURL, IXOwnedDataPromiseSeed;

@interface IXOwnedDataPromise : IXDataPromise <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) IXOwnedDataPromiseSeed *seed;
@property (retain, nonatomic) NSURL *stagedPath;
@property (readonly, nonatomic) NSURL *stagingBaseDir;


- (void).cxx_destruct;
- (id)stagingBaseDir;
- (Class)seedClass;

@end
