@class NSArray, NSEnumerator, NSURL;

@interface NTKArgonEncryptedBundleEnumerator : NSEnumerator {
    NSArray *_allObjects;
    NSEnumerator *_urlEnumerator;
    NSURL *_lastURL;
}

@property (readonly, copy) NSArray *allObjects;

- (id)nextObject;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)initWithSearchPathDomains:(unsigned long long)a0;
- (id)initWithSourceDirectoryPaths:(id)a0;
- (id)initWithSourceDirectoryURLs:(id)a0;
- (void).cxx_destruct;

@end
