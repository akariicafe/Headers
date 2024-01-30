@interface UINib : NSObject {
    id storage;
}

+ (id)nibWithData:(id)a0 bundle:(id)a1;
+ (id)nibWithNibName:(id)a0 bundle:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithContentsOfFile:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)didReceiveMemoryWarning:(id)a0;
- (id)initWithBundle:(id)a0;
- (id)effectiveBundle;
- (void)dealloc;
- (void).cxx_destruct;
- (id)lazyArchiveData;
- (id)nibDataForPath:(id)a0;
- (void)_registerForMemoryWarningIfNeeded;
- (id)bundleResourcePath;
- (BOOL)captureEnclosingNIBBundleOnDecode;
- (BOOL)captureImplicitLoadingContextOnDecode;
- (id)identifierForStringsFile;
- (id)initWithData:(id)a0 bundle:(id)a1;
- (id)initWithNibName:(id)a0 directory:(id)a1 bundle:(id)a2;
- (id)instantiateWithOwner:(id)a0 options:(id)a1;
- (BOOL)instantiatingForSimulator;
- (void)setCaptureEnclosingNIBBundleOnDecode:(BOOL)a0;
- (void)setCaptureImplicitLoadingContextOnDecode:(BOOL)a0;
- (void)setIdentifierForStringsFile:(id)a0;
- (void)setInstantiatingForSimulator:(BOOL)a0;
- (id)unarchiverForInstantiatingReturningError:(id *)a0;

@end
