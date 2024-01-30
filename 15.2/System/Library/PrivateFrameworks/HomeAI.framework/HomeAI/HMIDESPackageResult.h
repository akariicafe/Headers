@class NSData;

@interface HMIDESPackageResult : HMFObject

@property (readonly) NSData *result;
@property (readonly) float l2Norm;
@property (readonly) double maxNorm;
@property (readonly) BOOL didPrivatizePackageResult;
@property (readonly) BOOL didEncryptPackageResult;

- (void).cxx_destruct;
- (id)initWithPackageResult:(id)a0 didPrivatizePackageResult:(BOOL)a1 didEncryptPackageResult:(BOOL)a2 maxNorm:(double)a3 l2Norm:(float)a4;

@end
