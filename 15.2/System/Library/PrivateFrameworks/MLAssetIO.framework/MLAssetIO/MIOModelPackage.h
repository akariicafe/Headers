@class NSURL;

@interface MIOModelPackage : NSObject

@property (copy, nonatomic) NSURL *specificationURL;

+ (BOOL)_upgradeModelSpecificationAtURL:(id)a0 packageURL:(id)a1 error:(id *)a2;
+ (id)upgradeModelSpecificationAtURL:(id)a0 toURL:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)initWithModelPackageAtURL:(id)a0 error:(id *)a1;

@end
