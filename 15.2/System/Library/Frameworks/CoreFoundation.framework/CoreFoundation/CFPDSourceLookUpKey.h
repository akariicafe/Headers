@interface CFPDSourceLookUpKey : NSObject {
    struct __CFString { } *uncanonicalizedPath;
    struct __CFString { } *cloudPath;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;

@end
