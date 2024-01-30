@interface NSURLHostNameAddressInfo : NSObject {
    double timestamp;
    struct addrinfo { int x0; int x1; int x2; int x3; unsigned int x4; char *x5; struct sockaddr *x6; struct addrinfo *x7; } *addressInfo;
}

+ (void)asyncResolveWithCallbackClient:(id)a0;
+ (id)addressInfoForHost:(id)a0;

- (void)dealloc;
- (id)_initWithAddressInfo:(struct addrinfo { int x0; int x1; int x2; int x3; unsigned int x4; char *x5; struct sockaddr *x6; struct addrinfo *x7; } *)a0;
- (double)_timestamp;
- (struct addrinfo { int x0; int x1; int x2; int x3; unsigned int x4; char *x5; struct sockaddr *x6; struct addrinfo *x7; } *)addrinfo;

@end
