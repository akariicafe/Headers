@interface CFPDSourceLookUpKey : NSObject {
    struct __CFString { } *uncanonicalizedPath;
    struct __CFString { } *cloudPath;
}

- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
