@class CRKIfaddrs;

@interface CRKIfaddrsEnumerator : NSEnumerator {
    struct ifaddrs { struct ifaddrs *x0; char *x1; unsigned int x2; struct sockaddr *x3; struct sockaddr *x4; struct sockaddr *x5; void *x6; } *mInterfaces;
    CRKIfaddrs *mCurrentInterface;
}

+ (id)internetInterfaceEnumeratorWithError:(id *)a0;
+ (id)enumeratorWithError:(id *)a0;

- (id)nextObject;
- (id)initWithError:(id *)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)initWithInterfaces:(struct ifaddrs { struct ifaddrs *x0; char *x1; unsigned int x2; struct sockaddr *x3; struct sockaddr *x4; struct sockaddr *x5; void *x6; } *)a0;

@end
