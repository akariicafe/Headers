@interface UINib : NSObject {
    id storage;
}

+ (id)nibWithData:(id)a0 bundle:(id)a1;
+ (id)nibWithNibName:(id)a0 bundle:(id)a1;

- (id)effectiveBundle;
- (id)initWithBundle:(id)a0;
- (id)nibDataForPath:(id)a0;
- (id)initWithNibName:(id)a0 directory:(id)a1 bundle:(id)a2;
- (void)setIdentifierForStringsFile:(id)a0;
- (BOOL)captureEnclosingNIBBundleOnDecode;
- (BOOL)captureImplicitLoadingContextOnDecode;
- (id)instantiateWithOwner:(id)a0 options:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)identifierForStringsFile;
- (id)initWithContentsOfFile:(id)a0;
- (BOOL)instantiatingForSimulator;
- (id)bundleResourcePath;
- (id)unarchiverForInstantiatingReturningError:(id *)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)lazyArchiveData;
- (void)didReceiveMemoryWarning:(id)a0;
- (void)setInstantiatingForSimulator:(BOOL)a0;
- (void)_registerForMemoryWarningIfNeeded;
- (void)setCaptureEnclosingNIBBundleOnDecode:(BOOL)a0;
- (id)initWithData:(id)a0 bundle:(id)a1;
- (void)dealloc;
- (void)setCaptureImplicitLoadingContextOnDecode:(BOOL)a0;

@end
