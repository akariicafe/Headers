@interface ABCCallbackInvoker : NSObject {
    void /* function */ *cb;
    void *ab;
    void *context;
}

- (void)invoke;

@end
