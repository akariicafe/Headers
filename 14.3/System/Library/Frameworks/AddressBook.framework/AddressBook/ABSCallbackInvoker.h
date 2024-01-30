@interface ABSCallbackInvoker : NSObject {
    void *addressBook;
    void /* function */ *callback;
    void *context;
}

+ (void)invokeOnThread:(id)a0 callback:(void /* function */ *)a1 withAddressBook:(void *)a2 context:(void *)a3;

- (void)invoke;

@end
