@interface UINib : NSObject {
    id storage;
}

+ (id)nibWithNibName:(id)a0 bundle:(id)a1;
+ (id)nibWithData:(id)a0 bundle:(id)a1;

- (id)effectiveBundle;
- (BOOL)captureImplicitLoadingContextOnDecode;
- (id)initWithContentsOfFile:(id)a0;
- (void).cxx_destruct;
- (void)_registerForMemoryWarningIfNeeded;
- (void)dealloc;
- (void)setCaptureEnclosingNIBBundleOnDecode:(BOOL)a0;
- (BOOL)instantiatingForSimulator;
- (id)initWithNibName:(id)a0 directory:(id)a1 bundle:(id)a2;
- (id)lazyArchiveData;
- (id)initWithCoder:(id)a0;
- (id)nibDataForPath:(id)a0;
- (id)bundleResourcePath;
- (id)unarchiverForInstantiatingReturningError:(id *)a0;
- (BOOL)captureEnclosingNIBBundleOnDecode;
- (id)identifierForStringsFile;
- (id)initWithData:(id)a0 bundle:(id)a1;
- (void)setInstantiatingForSimulator:(BOOL)a0;
- (id)initWithBundle:(id)a0;
- (void)setCaptureImplicitLoadingContextOnDecode:(BOOL)a0;
- (void)didReceiveMemoryWarning:(id)a0;
- (id)instantiateWithOwner:(id)a0 options:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (void)setIdentifierForStringsFile:(id)a0;

@end
