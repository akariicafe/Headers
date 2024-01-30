@class NSString, NSURL, IXOwnedDataPromiseSeed;

@interface IXOwnedDataPromise : IXDataPromise <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) IXOwnedDataPromiseSeed *seed;
@property (retain, nonatomic) NSString *targetLastPathComponent;
@property (retain, nonatomic) NSURL *stagedPath;
@property (readonly, nonatomic) NSURL *stagingBaseDir;


- (void).cxx_destruct;
- (Class)seedClass;
- (BOOL)setTargetLastPathComponent:(id)a0 error:(id *)a1;
- (id)stagingBaseDir;
- (id)targetLastPathComponentWithError:(id *)a0;

@end
